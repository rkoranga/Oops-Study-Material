//This program will not run.
//There is ambiguity because two copies of base class are formed in d3
//This is diamond problem in inheritance, which causes ambiguity.

#include<iostream>
using namespace std;
class base
{
public:
    void fun()
    {
        cout<<"fun is called"<<endl;
    }
};
class d1:public base
{
     //This class is blank. But it inherits fun() from base

};
class d2:public base
{
     //This class is blank. But it inherits fun() from base

};
class d3:public d1, public d2 //multiple inheritance here
{
    //d3 contains two copies of base.
};
int main()
{
    d3 obj_d3;
    obj_d3.fun();// ambiguity error here. Bcoz, two copies of fun() are there.
}
