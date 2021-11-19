//
// Created by trevor on 2021-11-09.
//

#include "JumblePuzzle.h"

using namespace std;

//standard constructor
JumblePuzzle::JumblePuzzle(string word, string difficulty) {
    //initialize all variables
    size = 0;
    direction = 0;
    rowPos = 0;
    colPos = 0;
    puzzleArr = nullptr;

    char diff=difficulty[0];//get first letter of difficulty string
    int wordSize = word.length();//get length of inputted word
    if (wordSize<3||wordSize>10){//check whether length on word is valid
        throw BadJumbleException("Input Invalid - Word must be between 3 and 10 characters");
    }
    if (difficulty!="easy"&&difficulty!="medium"&&difficulty!="hard"){
        throw BadJumbleException("Input Invalid - Difficultly should be 'easy', 'medium', or 'hard' (case sensitive)");
    }
    switch (diff) {//handle difficulty
        case 'e': { //easy difficulty
            size = wordSize * 2;
            puzzleArr = new char* [size]; //create array of correct size
            for (int i = 0; i < size; i++) {
                puzzleArr[i] = new char[size]; //using heap
            }
            break;
        }
        case 'm': { //medium difficulty
            size = wordSize * 3;
            puzzleArr = new char* [size];
            for (int i = 0; i < size; i++) {
                puzzleArr[i] = new char[size];
            }
            break;
        }
        case 'h': { //hard difficulty
            size = wordSize * 4;
            puzzleArr = new char* [size];
            for (int i = 0; i < size; i++) {
                puzzleArr[i] = new char[size];
            }
            break;
        }
    }

    //populate array with random letters
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            puzzleArr[i][j] = 'a' + rand() % 26; //generate random letter
        }
    }




    int x = 0;
    //continue until entire word is in array
    while (word[x] != '\0') {
        srand(time(NULL));//used to generate random direction
        direction = dirOption[rand() % 4];//generate random direction

        srand(time(NULL));//generate random rowPos and colPos from 0 to size-1
        rowPos = rand() % size;
        colPos = rand() % size;

        switch (direction) {
            case 'w': //left
                if ((colPos - wordSize) < 0) {//check to see if word will fit here
                    break;//if not then break and pick new location and direction
                }else if (word[x] != '\0') {//if word fits here then put it in vector
                    for (int j = colPos; j > 0; j--) {
                        if (word[x] != '\0') {
                            puzzleArr[rowPos][j] = word[x];
                            x++;
                        }
                    }
                }else {
                    break;
                }

            case 'e': //Right
                if ((colPos + wordSize) > size) {
                    break;
                }else if (word[x] != '\0') {
                    for (int j = colPos; j < size; j++) {
                        if (word[x] != '\0') {
                            puzzleArr[rowPos][j] = word[x];
                            x++;
                        }
                    }
                }else {
                    break;
                }

            case 'n': //up
                for (int j = rowPos; j > 0; j--) {
                    if ((rowPos - wordSize) < 0) {
                        break;
                    }else if (word[x] != '\0') {
                        for (int j = rowPos; j > 0; j--) {
                            if (word[x] != '\0') {
                                puzzleArr[j][colPos] = word[x];
                                x++;
                            }
                        }
                    }else{
                        break;
                    }
                }

            case 's': //Down
                if ((rowPos + wordSize) > size) {
                    break;
                }else if (word[x] != '\0') {
                    for (int j = rowPos; j < size; j++) {
                        if (word[x] != '\0') {
                            puzzleArr[j][colPos] = word[x];
                            x++;
                        }
                    }
                }else {
                    break;
                }
        }
    }
}

//copy constructor
JumblePuzzle::JumblePuzzle(JumblePuzzle& copy) {
    //get size, direction, rowPos, and colPos using accessor functions
    size = copy.getSize();
    rowPos = copy.getRowPos();
    colPos = copy.getColPos();
    direction = copy.getDirection();

    charArrayPtr* currPuzzle = copy.getJumble(); //create new array using heap. Use getJumble function to copy vector
    puzzleArr=new charArrayPtr[this->size];

    //copy array
    for(int i=0; i<size;i++){
        puzzleArr[i]=new char[size];
        for (int j=0;j<size;j++){
            puzzleArr[i][j]=currPuzzle[i][j];
        }
    }
}

JumblePuzzle::~JumblePuzzle() { //destructor
    for (int i = 0; i < size; i++) {
        delete[] puzzleArr[i];
    }
    delete[] puzzleArr;
}

//accessor for size attribute
int JumblePuzzle::getSize() {
    return size;
}

//accessor for rowPos attribute
int JumblePuzzle::getRowPos() {
    return rowPos;
}

//accessor for colPos attribute
int JumblePuzzle::getColPos() {
    return colPos;
}

//accessor for direction attribute
char JumblePuzzle::getDirection() {
    return this->direction;
}

//accessor for JumblePuzzle attribute
charArrayPtr* JumblePuzzle::getJumble() {
    return this->puzzleArr;
}

//overloading for assignment operator
JumblePuzzle& JumblePuzzle::operator=(JumblePuzzle& right) {

    if (this != &right) {//check if assigning to itself
        for (int i = 0; i < size; i++) {
            delete[] puzzleArr[i];
        }
        delete[] puzzleArr;
    }

    //use accessors to get all attributes
    size = right.getSize();
    rowPos = right.getRowPos();
    colPos = right.getColPos();
    direction = right.getDirection();

    charArrayPtr* newArr = new charArrayPtr [size]; //create new vector

    for (int i = 0; i < size; i++) {
        newArr[i] = new char[size];
    }

    //copy contents to new array
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            newArr[i][j] = right.puzzleArr[i][j];
        }
    }
    return *this; //return address of itself
}

//error/exception handling
BadJumbleException::BadJumbleException(const string& m) : message(m) {}
string& BadJumbleException::what() { return message; }