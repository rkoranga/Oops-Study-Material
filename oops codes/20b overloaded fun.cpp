//Example of overloaded fun. Overloaded fun are hidden in derived class.

//There is a fun named overloaded_fun() in base class.
//If same fun is created by overloading in derived class then this fun will be hidden in derived class.


#include<iostream>
using namespace std;
class base
{
public:
    //fun in base class with one parameter
    void overloaded_fun(int x)
    {
        cout<<"overloaded fun with one parameter "<<x<<endl;
    }

};
class d1:public base
{
public:
    //same fun in derived class with two parameters.
    //This fun is overloaded, so it will be hidden in d1 class

    void overloaded_fun(int x,int y)
    {
        cout<<"overloaded fun with two parameter "<<x<<endl<<y<<endl;
    }


};
class d2 : public d1
{
public:
    //same fun in d2 class with three parameters.
    //This fun is overloaded, previous two functions will be hidden

    void overloaded_fun(int x, int y , int z)
    {
        cout<<"overloaded fun with three parameter "<<x<<endl<<y<<endl<<z<<endl;
    }


};
int main()
{
    d2 obj_d2;

    //d2 can't access these functions. These functions are hidden.
    //obj_d2.overloaded_fun(1); //overloaded fun with one parameter. This is hidden in d2.
    //obj_d2.overloaded_fun(1,2); //overloaded fun with two parameter. This is hidden in d2

    obj_d2.overloaded_fun(1,2,3);//d2 can directly call its own overloaded fun.

    obj_d2.base::overloaded_fun(1);//This is hidden, so specify class name and Scope resolution operator to use.
    obj_d2.d1::overloaded_fun(1,2);//This is hidden, so specify class name and Scope resolution operator to use.
}
