//Behaviour of a destructor in in dynamic object

//The object is not destroyed automatically as it is a dynamic object.
//No destructor will be called.
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
    d2 *p;//create a base pointer.
    p=new d2;//assign a dynamic object of d2 to this base pointer

    //Object will not be destroyed when program finishes
    //No destructor will be called.

}
