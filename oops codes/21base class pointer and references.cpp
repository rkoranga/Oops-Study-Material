//Base class pointers and references.

//Base class pointer/ref can point to a base class object as well as derived class obj.
//Derived class ptr/ref can only point to a derived class obj, can't point to base class obj.

//In this program , base ptr and ref are simply created, they are not used. They will be used in next program
#include<iostream>
using namespace std;
class base
{
public:
    void fun1()
    {
        cout<<"fun1 in base called"<<endl;
    }
};
class d1:public base
{
public:
    void fun2()
    {
        cout<<"fun2 in d1 called"<<endl;
    }
};

class d2:public d1
{
public:
    void fun3()
    {
        cout<<"fun3 in d2 called"<<endl;
    }
};

int main()
{
    d2 obj_d2;//d2 class obj
    base obj_b;//base class obj

    base *bp;//base class pointer
    d2 *d2p; //d2 (derived class) pointer


    //CASE-1 derived ptr can only point to derived obj.
    d2p=&obj_d2;
    //d2p = &obj_b; //derived ptr can't point to a base obj.


    //CASE-2 base ptr Can point to both derived class obj and base class obj
    bp=&obj_d2;//base ptr can point to d2 obj.
    bp=&obj_b;//base ptr can point to base obj.


    //------------SAME for References--------------

    //Case-1 derived class ref can only point to derived obj.
    d2 &dref = obj_d2;//derived ref can point to derived obj.
    //d2 &ref = obj_b;//derived ref can't point to base obj.

    //Case-2 base ref can point to both base and derived class object.
    base &ref1= obj_d2;//base ref to derived class obj.
    base &ref2=obj_b; // base ref to base class obj.

}
