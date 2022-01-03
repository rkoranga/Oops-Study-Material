//Behaviour of dynamic obj with virtual destructor


//Dynamic obj is created
//Base class has a virtual destructor
//The dy. obj is destroyed using delete
//All destructors will be called in proper order as virtual destructor is used.

#include<iostream>
using namespace std;

class base
{
public:
    //***Declare the destructor as virtual
    virtual ~base()
    {
        cout<<"base destructor called"<<endl;
    };
};
class d1:public base
{
public:
    //No need to declare derived class destructor as virtual
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

    base *p;//base ptr.
    p=new d2;//dy. obj of d2 is created.
    delete p;//dy. obj is destroyed.
    //obj destroyed
    //All destructor will be called in proper order because virtual destructor


}
