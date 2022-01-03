//Passing parameters to base constructor///
//C/D in inheritance. Parameterized constructors are used. 
//Derived class must pass parameters to a base class constructor if there is parameterized base constructor.
//b->d1->d2->
//d2 will call d1 constructor and pass parameters to it.
//d1 will call b constructor and pass parameters to it.

#include<iostream>
using namespace std;
class base
{
protected:
    int i;
public:
    base(int x)
    {
        i=x;
        cout<<"base constructor called\n";
    }
};
class d1: public base
{
  protected:
      int j;
  public:
    //There is parameterized constructor in base.
    //d1 must pass parameters to that base constructors.
    //d1 calls base constructor and pass parameters to it.

    d1(int x, int y): base(x) //do not write int x inside base. simply write x
    {
        //x is passed to base
        //y is assigned to j;
        j=y;
        cout<<"d1 constructor called\n";
    }
};
class d2:public d1
{
protected:
    int k;
public:
    //There is parameterized constructor in base class of d2.
    //d1 is the base class of d2.
    //d2 must pass parameters to that d1 constructors.
    //d2 calls d1 constructor explicitly and pass parameters to it.
    d2(int x, int y, int z): d1(x,y) ////do not write int x, int y d1 base. simply write x,y
    {
        //x,y are passed to d1
        //z is used to initialize k;
        k=z;
        cout<<"d2 constructor called\n";
    }
    void get()
    {
        cout<<i<<endl<<j<<endl<<k<<endl;
    }
};
int main()
{
    //10 assigned to i;
    //20 assigned to j;
    //30 assigned to k;
    d2 obj_d2(10,20,30);
    obj_d2.get();
}
