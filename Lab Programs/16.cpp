#include<iostream>
using namespace std;

class complex
{

    int real,img;
    public:
    void input();
    void disp();
    
    friend complex operator-(complex obj1, complex obj2);
    friend complex operator++(complex obj1);
    friend complex operator++(complex obj1, int x);
    friend complex operator--(complex obj1);
    friend complex operator--(complex obj1, int x);
    
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


complex operator-(complex obj1, complex obj2)
{
    complex obj3;
    obj3.real=obj1.real-obj2.real;
    obj3.img=obj1.img-obj2.img;
    return obj3;
}
//preincrement
complex operator++(complex obj1)
{
    obj1.real++;
    obj1.img++;
    return obj1;
}
//post increment
complex operator++(complex obj1, int x)
{
    complex temp;
    temp.real= obj1.real;
    temp.img=obj1.img;

    obj1.real++;
    obj1.img++;

    return temp;

}

//pre decrement
complex operator--(complex obj1)
{
    obj1.real--;
    obj1.img--;
    return obj1;
}

//post decrement
complex operator--(complex obj1, int x)
{
    complex temp;
    temp.real=obj1.real;
    temp.img=obj1.img;

    obj1.real--;
    obj1.img--;
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