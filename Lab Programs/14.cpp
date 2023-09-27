#include<iostream>
using namespace std;

class complex
{

    int real,img;
    public:
    void input();
    void disp();
    complex operator+(complex obj2);
    complex operator-(complex obj2);
    bool operator==(complex obj2);
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
complex complex::operator+(complex obj2)
{
    complex obj3;
    obj3.real=real+obj2.real;
    obj3.img=img+obj2.img;
    return obj3;
}

complex complex::operator-(complex obj2)
{
    complex obj3;
    obj3.real=real-obj2.real;
    obj3.img=img-obj2.img;
    return obj3;
}

bool complex::operator==(complex obj2)
{
    if(real==obj2.real and img == obj2.img)
    {
        cout<<real<<obj2.real<<img<<obj2.img<<endl;
        return true;
    }
    else return false;
}

int main()
{
    complex obj1, obj2, obj3;
    cout<<"Demonstration of +, - and == \n";

    obj1.input();
    obj2.input();

    cout<<"Adding objects\n";
    obj3=obj1+obj2;
    obj3.disp();

    cout<<"Subtracting objects\n";
    obj3=obj1-obj2;
    obj3.disp();
    
    cout<<"comparing objects\n";
    if(obj1==obj2)
    {
        cout<<"Objects are equal\n";
    }

    else
    {
        cout<<"objects are not equal\n";
    }
    
    
    return 0;
}