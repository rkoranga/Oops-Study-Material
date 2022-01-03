//This program will not run, because d1 constructor is not calling base constructor.
//It is mandatory for derived class to call base constructor, if the base constructor is parameterized.
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
    d1(int y) //***parameterized base constructor must be called here
    {
        j=y;
        cout<<"d1 constructor called\n";
    }
};
class d2:public d1
{
protected:
    int k;
public:
    d2(int x, int y, int z): d1(x,y)
    {
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
    d2 obj_d2(10,20,30);
    obj_d2.get();
}
