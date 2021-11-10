//
// Created by trevo on 2021-09-29.
//

#ifndef SHAKESPEARIANINSULTGENERATOR_INSULTGENERATOR_18TK30_H
#define SHAKESPEARIANINSULTGENERATOR_INSULTGENERATOR_18TK30_H

//include all required packages and libraries
#include <iostream>
#include <string>
#include <vector>
#include <time.h>
#include <fstream>
#include <sstream>

using namespace std;

class InsultGenerator{//initialize InsultGenerator class
public://headings for all public functions
    InsultGenerator();//constructor for InsultGenerator class

    int initialize();//initialize function that takes in no parameters and returns an int for whether initialization
    // was successful. Purpose is to open file and copy all strings in the file to a vector of strings.
    string talkToMe();//talk to me function that takes in no parameters and returns a string. String that is returned is
    //a single unique insult generated randomly from source text.
    vector<string> generate(const int numInsults);//generate function takes in a const int for number of insults to be
    //generated and returns a vector of strings containing the specified number of unique insults. Calls talkToMe()
    //function 'numInsults' times to generate insults
    vector<string> generateAndSave(string fileName, const int numInsults);//generateAndSave function that takes in a
    //string for the destination file path and a const int for the number of insults to be generated. Calls generate()
    //function with 'numInsults' and then pushes the vector returned to the file specified by 'fileName'

private:
    //inialize all private datatypes required for program to run
    vector<string> column1;//vector of strings to store each column of the text file
    vector<string> column2;
    vector<string> column3;
    vector<string> allColumns;//vector of strings to store each line of original file
    vector<string> insults;//vector fo strings to store generated insults

};

class FileException{//initialize FileException class
public:
    FileException(const string& message);//constructor for FileException class
    string& what();//function what() that returns a string reference
private:
    string message;//string attribute for class
};

class NumInsultsOutOfBounds{//initialize NumInsultsOutOfBounds class
public:
    NumInsultsOutOfBounds(const string& message);//constructor for NumInsultsOutOfBounds class
    string& what();//function what() that returns a string reference
private:
    string message;//string attribute for class
};

#endif //SHAKESPEARIANINSULTGENERATOR_INSULTGENERATOR_18TK30_H
