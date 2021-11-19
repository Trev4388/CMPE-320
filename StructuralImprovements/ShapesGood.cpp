//
// Created by trevo on 2021-11-19.
//

#include "ShapesGood.h"

//All base class (Shape) functions
Shape::Shape():length(0), width(0){}//default constructor
Shape::Shape(int len, int wid):length(len), width(wid){} //constructor for parent class Shape
Shape::~Shape(){} //destructor
void Shape::draw() {} //default draw() function for parent class
int Shape::getLength() {return length;}//accessor
int Shape::getWidth() {return width;}//accessor

//Child class Square, inherits from Shape
Square::Square(int len, int wid, string bc): Shape(len, wid), borderColour(bc) {} //constructor
Square::~Square(){} //destructor
string Square::getbc() {return borderColour;}
void Square::draw() {cout<<"\nDrawing a "<<getbc()<<" square.";}

//Child class filledSquare, inherits from Square
FilledSquare::FilledSquare(int len, int wid, string bc, string fc): Square(len, wid, bc), fillColour(fc) {} //constructor
FilledSquare::~FilledSquare(){} //destructor
string FilledSquare::getfc() {return fillColour;}
void FilledSquare::draw() {
    Square::draw();
    cout<<" With "<<getfc()<<" fill.";
}

//Child class textSquare, inherits from filledSquare
FilledTextSquare::FilledTextSquare(int len, int wid, string bc, string fc, string text): FilledSquare(len, wid, bc, fc), text(text) {} //constructor
FilledTextSquare::~FilledTextSquare(){} //destructor
string FilledTextSquare::getText() {return text;}
void FilledTextSquare::draw() {
    FilledSquare::draw();
    cout<<" Containing the text: \""<<getText()<<"\".";
}

//Child class Circle, inherits from square
Circle::Circle(int len, int wid, string bc): Square(len, wid, bc) {} //constructor
Circle::~Circle(){}//destructor
void Circle::draw(){
    cout<<"\nDrawing a "<<getbc()<<" circle.";
}

//Child class filledCircle, inherits from filledSquare
FilledCircle::FilledCircle(int len, int wid, string bc, string fc): FilledSquare(len, wid, bc, fc) {} //constructor
FilledCircle::~FilledCircle(){}//destructor
void FilledCircle::draw(){
    //Circle::draw(); //could not get this to work. I tried using multiple inheritance but then I have to use both constructors which causes errors
    cout<<"\nDrawing a "<<getbc()<<" cricle.";
    cout<<" With "<<getfc()<<" fill.";
}

//Child class Arc, inherits Square
Arc::Arc(int len, int wid, string bc):Square(len, wid, bc) {} //constructor
Arc::~Arc(){} //destructor
void Arc::draw() {
    cout<<"\nDrawing a "<<getbc()<<" arc.";
}