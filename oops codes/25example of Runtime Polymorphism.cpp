//example of runtime polymorphism

//

//Advantage of Runtime polymorphism is that it allows you to pass any object to a function.
//In example1, only base obj can be passed. This is disadvantage of compile time polymorphism
//In example2, any type of obj can be passed. This is advantage of run time polymorphism.

//example1 uses base obj as parameter, example2 uses base ref as param, so it allows runtime polymorphism

//***example1 and example2 are created just to show how compile and runtime polymorphism works.***
#include<iostream>
using namespace std;
class base
{
public:
    //Virtual fun in base class
    virtual void fun()
    {
        cout<<"base fun called"<<endl;
    }
};
class d1:public base
{
public:
    //this fun is redefined in d1 class
    void fun()
    {
        cout<<"d1 fun called"<<endl;
    }
};
class d2:public d1
{
    //This fun is redefined in d2 class
    void fun()
    {
        cout<<"d2 fun called"<<endl;
    }
};

//example1 uses base obj as parameter. So it supports only compile time polymorphism
void example1(base obj_base)
{
    //Here virtual fun is called.
    obj_base.fun();
}

//Example2 uses base ref as parameter. So it supports run time polymorphism
//& sign means that base ref is used.
void example2(base &ref)
{
    //Here virtual fun is called
    ref.fun();
}

int main()
{
    //Three types of obj are created
    base obj_b;
    d1 obj_d1;
    d2 obj_d2;

    //example1 supports only compile time polymorphism. so only base obj can be passed.
    example1(obj_b);
    //example1(obj_d1);//d1 obj can't be passed, because it takes base obj as param.
    //example1(obj_d2);//d2 obj can't be passed, because it takes base obj as param.

    //example2 supports run time polymorphism. So any type of obj can be passed.
    example2(obj_b);//base obj can be passed, becoz it takes base ref as param
    example2(obj_d1);//d1 obj can be passed, becoz it takes base ref as param
    example2(obj_d2);//d2 obj can be passed, becoz it takes base ref as param
}
