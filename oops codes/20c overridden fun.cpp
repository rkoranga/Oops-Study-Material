//Example of overridden fun or function overriding.

//Overridden fun are inherited by derived classes.
//overridden fun must have same parameters and same name.
//overridden fun are hidden in derived class.
//derived class must specify class name and :: to access hidden fun of base class.

#include<iostream>
using namespace std;
class base
{
public:

    //Base class contains a fun named overridden_fun()
    //derived class contains same fun with same parameters
    //this fun will be inherited by derived class
    void overridden_fun()
    {
        cout<<"overridden fun in **base** class"<<endl;
    }
};
class d1:public base
{
public:
    //Derived class overrides the base class fun.
    //it has same parameters as the fun in base class.
    //There are two fun now, one is inherited from base and other is defined below
    void overridden_fun()
    {
        cout<<"overridden fun in **d1** class"<<endl;
    }
};
class d2 : public d1
{
public:
    //This class creates another fun with same name and parameter.
    //There are three fun in this class. Two are inherited and one is defined below.
    void overridden_fun()
    {
        cout<<"overridden fun in **d2** class"<<endl;
    }
};
int main()
{
    d2 obj_d2;
    //d2 contains three fun.
    obj_d2.overridden_fun();// fun() in d2 is called.


    //inherited fun are overridden(hidden), so class name and scope resolution operator are used
    //to access the hidden functions.
    obj_d2.d1::overridden_fun();//fun() in d1 is called.
    obj_d2.base::overridden_fun();//fun() in base is called.
}
