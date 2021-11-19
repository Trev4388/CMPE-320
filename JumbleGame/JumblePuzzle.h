//
// Created by trevor on 2021-11-09.
//

#pragma once

#include <cctype>
#include <iostream>
#include <string>
#include <vector>
#include <ctime>

typedef char* charArrayPtr;
using namespace std;

class JumblePuzzle {
public:
    JumblePuzzle(string word, string diff); //standard constructor
    JumblePuzzle(JumblePuzzle& copy); //copy constructor
    ~JumblePuzzle(); //destructor
    int getSize(); //returns size based on difficulty
    int getRowPos(); //returns row position
    int getColPos(); //returns column position
    char getDirection(); //returns direction
    charArrayPtr* getJumble(); //game array accessor
    JumblePuzzle& operator=(JumblePuzzle& right); //assignment operator overload
private:
    int size; //length of hidden word
    int rowPos; //row position of word
    int colPos; //column position of word
    char direction; //direction of hidden word
    char dirOption[4]={'n', 'e', 's', 'w'}; //possible directions
    charArrayPtr* puzzleArr; //2D vector for game
};

//make an error class
class BadJumbleException {
public:
    BadJumbleException(const string& message);
    string& what();

private:
    string message;
};