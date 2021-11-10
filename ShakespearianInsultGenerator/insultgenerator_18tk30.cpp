/*
 * MESSAGE TO THE MARKER:
 * You will need to specify the input file path in the initialize() function on line 24 (the instructions did not state
 * that this function should take the file name as a parameter). I also encountered issues with the exceptions printing
 * out of sync. If you replace the 'cerr' with 'cout' in the source file it should remedy the issue but it will not
 * print in red. I spoke to the professor and she said that many people are encountering the issue and that we will not
 * be docked marks for it.
 */
#include <iostream>
#include <string>
#include <vector>
#include <time.h>
#include <fstream>
#include <algorithm>
#include "insultgenerator_18tk30.h"//must include header file

using namespace std;

InsultGenerator::InsultGenerator(){}//initialize constructor

int InsultGenerator::initialize() {//code for initialize() function

    string currLine;//string to store current line of text file
    ifstream InsultsSource("C:\\Users\\trevo\\OneDrive\\Desktop\\Year Three Course Work\\CMPE 320 - Fundementals of Software Development\\Assignment 1\\InsultsSource.txt");
    //input stream for source text file

    if(InsultsSource.fail()){//check to see if file can be opened. Return 0 for fail to open.
        throw FileException("\nFile cannot be read.\n");
    }

    stringstream stringS;//initialize string stream

    while(!InsultsSource.eof()){//loop until end of file is reached
        getline(InsultsSource, currLine);//get current line of text file and store in string

        stringS.clear();
        stringS.str(" ");
        stringS << currLine;
        //ignore blank spaces between words

        while ((stringS >> currLine)) {

            allColumns.push_back(currLine);//push each word to string vector

        }
    }

    for (int i=0;i<allColumns.size();i=i+3) {//traverse vector of all strings and assign each word to its corresponding
        //column vector

        column1.push_back(allColumns[i]);
        column2.push_back(allColumns[i + 1]);
        column3.push_back(allColumns[i + 2]);

    }

    InsultsSource.close();//close file path
    return 1;//return 1 for successful initialization
}

string InsultGenerator::talkToMe() {//function uses random number generator to get a random index for each column vector
    //and thus generate a random insult by combining random words into a single string. Returns generated string.

    int x=rand()%50;
    int y=rand()%50;
    int z=rand()%50;

    string randInsult="Thou "+column1[x]+" "+column2[y]+" "+column3[z]+"!";
    return randInsult;

}

vector<string> InsultGenerator::generate(int numInsults){//function calls talkToMe() a specified number of times to
    // generate required number of insults. Returns vector of strings with insults

    insults.clear();

    if(numInsults<0||numInsults>10000){
        throw NumInsultsOutOfBounds("\nnumInsults out of bounds.\n");
    }
    for (int i=0;i<numInsults;i++){
        string currInsult=talkToMe();
        insults.push_back(currInsult);
    }
    return insults;
}

vector<string> InsultGenerator::generateAndSave(string fileName, const int numInsults){//calls generate() to create
    // insults then pushes vector to a specified output file. Vector is sorted alphabetically before pushing to file.
    ofstream InsultDestination(fileName);
    if(InsultDestination.fail()){//check to see if file can be opened. Return 0 for fail to open.
        throw FileException("\nFile cannot be read.\n");
    }
    insults=generate(numInsults);
    sort(insults.begin(), insults.end());
    for (int i=0;i<insults.size();i++){
        InsultDestination<<insults[i];
        InsultDestination<<endl;
    }
    return insults;
}

FileException::FileException(const string &message) :message(message){}
string& FileException::what() {return message;}

NumInsultsOutOfBounds::NumInsultsOutOfBounds(const string &message):message(message) {}
string& NumInsultsOutOfBounds::what() {return message;}