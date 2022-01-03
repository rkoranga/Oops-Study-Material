//Behaviour of a destructor when a Dynamic object is destroyed using delete.

//Dy. obj is created. It is released using delete operator.

//The obj is destroyed.
//Only base destructor will be called.

#include<iostream>
using namespace std;

class base
{
public:
    ~base()
    {
        cout<<"base destructor called"<<endl;
    };
};
class d1:public base
{
public:
    ~d1()
    {
        cout<<"d1 destructor called"<<endl;
    };
};
class d2:public d1
{
public:
    ~d2()
    {
        cout<<"d2 destructor called"<<endl;
    };
};
int main()
{
    base *p;//create a base pointer
    p=new d2;//create a dynamic obj. assign to this pointer.

    delete p;//Release the memory of dynamic object using delete.

    //The obj is destroyed by user using delete
    //Only base destructor will be called. Delete has undefined behaviour in this case.
}
