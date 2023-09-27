#include<iostream>
using namespace std;

class complex
{

    int real,img;
    public:
    void input();
    void disp();
    
    complex operator-(complex obj2);
    complex operator++();
    complex operator++(int x);
    complex operator--();
    complex operator--(int x);
    
};
void complex::input()
{
    cout<<"Enter real and img part\n";
    cin>>real>>img;
}

void complex::disp()
{
    cout<<"The details of obj are\n";
    cout<<"real : "<<real<<" img: "<<img<<endl;
}


complex complex::operator-(complex obj2)
{
    complex obj3;
    obj3.real=real-obj2.real;
    obj3.img=img-obj2.img;
    return obj3;
}
//preincrement
complex complex::operator++()
{
    real++;
    img++;
    return *this;
}
//post increment
complex complex::operator++(int x)
{
    complex temp;
    temp.real= real;
    temp.img=img;

    real++;
    img++;

    return temp;

}

//pre decrement
complex complex::operator--()
{
    real--;
    img--;
    return *this;
}

//post decrement
complex complex::operator--(int x)
{
    complex temp;
    temp.real=real;
    temp.img=img;

    real--;
    img--;
    return temp;
}




int main()
{
    complex obj1, obj2, obj3;
    cout<<"Demonstration of --, pre increment, post increment, pre decrement, post decrement\n";

    obj1.input();
    obj2.input();

    cout<<"subtracting objects\n";
    obj3=obj1-obj2;
    obj3.disp();

    cout<<"Pre Increment objects\n";
    obj3=++obj1;
    obj3.disp();
    
    cout<<"Post increment objects\n";
    obj3=obj1++;
    obj3.disp();

    cout<<"Pre decrement objects\n";
    obj3=--obj1;
    obj3.disp();
    
    cout<<"Post decrement objects\n";
    obj3=obj1--;
    obj3.disp();
    
    return 0;
}