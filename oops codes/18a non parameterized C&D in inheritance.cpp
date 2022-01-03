//C/D in inheritance. Non-parameterized constructors.
//Each class has non parameterized constructor and destructor.
//base->d1->d2 is the hierarchy of classes.
//When d2 object is created, constructors are called top to bottom.
//and destructors are called bottom to top.
#include<iostream>
using namespace std;
class base
{
public:
    base()
    {
        //Non parameterized constructor
        cout<<"base constructor called"<<endl;
    }
    ~base()
    {
        cout<<"Base destructor called"<<endl;
    }

};

class d1:public base
{
    public:
    //Non parameterized constructor
    d1() {cout<<"d1 constructor called"<<endl;}
    ~d1() {cout<<"d1 destructor called"<<endl;}
};
class d2:public d1
{
    public:
    //Non parameterized constructor
    d2() {cout<<"d2 constructor called"<<endl<<endl;}
    ~d2() {cout<<"d2 destructor called"<<endl;}
};

int main()
{
    //Object of d2 is created. All constructors and destructors are called
    d2 obj_d2;


}
