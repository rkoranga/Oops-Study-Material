//Non virtual function called using a base ptr/ref

//When a non virtual fun is called using a base ptr/ref, then base class fun will be called.
//Derived class fun will not be called.


//Difference between virtual and non virtual
//If non virtual fun is used then base fun is called.
//if virtual fun is used then derived fun is called
#include<iostream>
using namespace std;
class base
{
public:
    //This fun will be redefined in d1 and d2 class
    void fun()
    {
        cout<<"fun in base called"<<endl;
    }
};
class d1:public base
{
public:
    //This fun is redefined here.
    void fun()
    {
        cout<<"fun in d1 called"<<endl;
    }
};

class d2:public d1
{
public:
    //This class contains three fun().
    //Two are inherited from base and d1 classes.
    void fun()
    {
        cout<<"fun in d2 called"<<endl;
    }
};

int main()
{
    d2 obj_d2;//d2 class obj
    base *bp;//base class pointer


    //Base ptr pointing to derived class obj
    bp=&obj_d2;
    bp->fun();//Base fun will be called here. derived class fun will not be called
    //If virtual fun is used then d2 fun will be called.


    //-------------- Similar for references -------
    //****** When using a reference . dot operator is used. arrow -> operator is not used.

    //base class ref pointing to derived class obj.
    base &ref2 = obj_d2;
    ref2.fun();//Base fun will be called here. derived class fun will not be called
    ////If virtual fun is used then d2 fun will be called.




}
