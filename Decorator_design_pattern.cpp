/*
Decorator_design_pattern.cpp
Description: Decorator Design pattern or Wrapper design pattern
two types of Decorartor DP
1. Dynamic Decorator DP
2. Static Decorator DP
*/
#include<stdio.h>
#include<stdlib.h>
#include<iostream>
#include<string>
#include<sstream>
using namespace std;
class Shape {
    public:
    virtual operator string()=0;
};

class Circle:public Shape {
    float m_radius;
    public:
    Circle(const float raidus)
    {
        m_radius=raidus;
    }
    void resize(float factor) {m_radius *=factor;}
    operator string() {
        ostringstream oss;
        oss<<"A circle of radius"<<m_radius;
        return oss.str();
    }
};
class Square:public Shape {
    float m_side;
    public:
    Square(const float side=0):m_side(side){}
    operator string() {
        ostringstream oss;
        oss<<"A square of side: "<<m_side;
        return oss.str();
    }
};

class ColoredShape: public Shape {
    const Shape& m_shape;
    string m_color;
    public:
    ColoredShape(const Shape &s, const string &c): m_shape(s), m_color(c){}
    operator string () {
        ostringstream oss;
        oss<<string(const_cast<Shape&>(m_shape))<<" has ths color "<<m_color;
        return oss.str();
    }
};

int main()
{
    Square square(5);
    ColoredShape green_square(square, "green");
    cout<<string(square)<<endl<<string(green_square) <<endl;
    return EXIT_SUCCESS;
}
