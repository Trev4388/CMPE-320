//
// Created by trevo on 2021-11-19.
//

#ifndef STRUCTURALIMPROVEMENTS_SHAPESGOOD_H
#define STRUCTURALIMPROVEMENTS_SHAPESGOOD_H



#include <string>
#include <iostream>
using namespace std;

class Shape {
public:
    Shape(); //default constructor
    Shape(int len, int wid); //main constructor
    virtual ~Shape(); //destructor
    int getLength(); //length accessor
    int getWidth(); //width accessor
    virtual void draw(); //method for each child to use
private:
    int length, width; //length and width variables
};

class Square : public Shape{ //parent for all shapes
public:
    Square(int len, int wid, string bc);//constructor
    ~Square();//destructor
    void draw(); //draw function
    string getbc(); //border colour accessor
private:
    string borderColour; //string to hold border colour
};

class FilledSquare : public Square{ //parent of all filled shapes
public:
    FilledSquare(int len, int wid, string bc, string fc); //constructor
    ~FilledSquare(); //destructor
    void draw(); //draw function
    string getfc();// fill colour accessor
private:
    string fillColour; //string to hold fill colour
};

class FilledTextSquare : public FilledSquare{ //parent for all shapes with text
public:
    FilledTextSquare(int len, int wid, string bc, string fc, string text); //constructor
    ~FilledTextSquare(); //destructor
    void draw(); //draw function
    string getText(); //text accessor
private:
    string text; //string to hold text
};

class Circle : public Square{ //inherits from square
public:
    Circle(int len, int wid, string bc); //constructor
    ~Circle(); //destructor
    void draw(); //draw function
};

class FilledCircle : public FilledSquare{ //inherits from filled square
public:
    FilledCircle(int len, int wid, string bc, string fc); //constructor
    ~FilledCircle(); //destructor
    void draw(); //draw function
};

class Arc : public Square{ //inherits from square
public:
    Arc(int len, int wid, string bc); //constructor
    ~Arc(); //destructor
    void draw(); //draw function
};


#endif //STRUCTURALIMPROVEMENTS_SHAPESGOOD_H
