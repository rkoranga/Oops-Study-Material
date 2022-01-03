//Example of a PVF and Abstract class

//Shape is an abstract class. It contains a pure vir fun calculateArea()
//This class is inherited by circle, rect, square classes.
//These derived classes must define the pure vir fun.

#include <iostream>
using namespace std;
// Abstract class
class Shape
{
    public:
    virtual float calculateArea() = 0; // pure virtual function.It is not defined here.
};
class Square : public Shape
{
    float a;
    public:
    Square(float l)
    {
        a = l;
    }
    //Square class defines the pure virtual fun
    float calculateArea()
    {
        return a*a;
    }
};
class Circle : public Shape
{
    float r;
    public:

    Circle(float x)
    {
        r = x;
    }
    //Circle class defines the pure virtual fun
    float calculateArea()
    {
        return 3.14*r*r ;
    }
};
class Rectangle : public Shape
{
    float l;
    float b;
    public:
    Rectangle(float x, float y)
    {
       l=x;
       b=y;
    }
    //Rectangle class defines the pure virtual fun.
    float calculateArea()
    {
        return l*b;
    }
};
int main()
{
    //object of shape can't be created. But pointer of shape can be created.
    Shape *shape;
    Square s(3.4);//object of square class.
    Rectangle r(5,6);//obj of rectangle class.
    Circle c(7.8);//obj of circle class
    shape =&s;//bp pointing to square obj
    int a1 =shape->calculateArea();//call the fun using bptr
    shape = &r;//bp pointing to rect obj
    int a2 = shape->calculateArea();//call fun using bptr
    shape = &c;
    int a3 = shape->calculateArea();
    std::cout << "Area of the square is " <<a1<< std::endl;
    std::cout << "Area of the rectangle is " <<a2<< std::endl;
    std::cout << "Area of the circle is " <<a3<< std::endl;
    return 0;
}
