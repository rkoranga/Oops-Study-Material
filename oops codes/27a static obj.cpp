//Behaviour of a Destructor in a static object

//obj will be destroyed automatically
//All destructors will be called in proper order
#include<iostream>
using namespace std;
class base
{
public:
    //destructor in base
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
    d2 obj_d2;//create a derived class object
    //d2 obj destroyed
    //All destructor called from bottom to top.
}
