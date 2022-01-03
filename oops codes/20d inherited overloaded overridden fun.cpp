//This code contains example of inherited , overloaded, overridden fun in same program.


#include<iostream>
using namespace std;
class base
{
public:
    //This fun is not redefined in derived classes.
    //It will be inherited by derived classes
    void inherited_fun()
    {
        cout<<"Inherited function"<<endl;
    }


    //This fun is redefined in derived classes with different parameters.
    //It will be hidden in derived class
    void overloaded_fun(int x)
    {
        cout<<"overloaded fun with one parameter "<<x<<endl;
    }


    //This fun is redefined in derived classes with same parameters.
    //It will be hidden in derived class.
    void overridden_fun()
    {
        cout<<"overridden fun in **base** class"<<endl;
    }
};
class d1:public base
{
public:
    //There is one inherited_fun() in this class


    //This is the overloaded_fun() in this class.
    //Overloaded_fun of base is hidden
    void overloaded_fun(int x,int y)
    {
        cout<<"overloaded fun with two parameter "<<x<<endl<<y<<endl;
    }



    //This is the overidden_fun() in this class.
    //overridden_fun() of base is hidden.
    void overridden_fun()
    {
        cout<<"overridden fun in **d1** class"<<endl;
    }
};
class d2 : public d1
{
public:
    //There is one inherited_fun() in this class


    //This is the overloaded_fun() in this class.
    //Overloaded_fun of base and d1 are hidden.
    void overloaded_fun(int x, int y , int z)
    {
        cout<<"overloaded fun with three parameter "<<x<<endl<<y<<endl<<z<<endl;
    }


    //This is the overidden_fun() in this class.
    //overridden_fun() of base and d1 are hidden.
    void overridden_fun()
    {
        cout<<"overridden fun in **d2** class"<<endl;
    }
};
int main()
{
    d2 obj_d2;

    //d2 contains one inherited fun
    obj_d2.inherited_fun();


    //d2 contains these overloaded fun.
    obj_d2.base::overloaded_fun(1); //This is hidden. so use class name and ::
    obj_d2.d1::overloaded_fun(1,2);//This is hidden. so use class name and ::
    obj_d2.overloaded_fun(1,2,3);//This is not hidden. so obj can directly use it.


    //d2 contains these overridden fun
    obj_d2.overridden_fun(); //overridden fun of d2. This is not hidden
    obj_d2.base::overridden_fun(); //overridden fun of base is hidden. So use class name and ::
    obj_d2.d1::overridden_fun(); //overridden fun of d1 is hidden. So use class name and ::
}
