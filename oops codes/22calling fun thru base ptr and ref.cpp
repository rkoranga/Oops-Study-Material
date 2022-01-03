//Calling fun using base class pointer and reference.

//A base class pointer can call only base class functions. It can't call derived class functions.
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
    base *bp;//base class pointer

    //d2 obj can call all three functions.
    obj_d2.fun1();
    obj_d2.fun2();
    obj_d2.fun3();


    //base pointer pointing to d2 obj.
    bp = &obj_d2;
    bp->fun1(); //base ptr can call a base class fun().
    //bp->fun2(); //bp can't call fun in derived classes. fun2 is in d1
    //bp->fun3();//bp can't call fun in derived classes. fun1 is in d2



    ////****** When using a reference use . dot operator. Do not use -> arrow operator to call fun.

    //base ref pointing to derived class obj
    base &bref=obj_d2;
    bref.fun1();//Base ref can call only base function in derived obj.
    //bref.fun2();//Base ref can't call derived class fun. fun2() is in d1.
    //bref.fun3();//Base ref can't call derived class fun. fun1() is in d2


}
