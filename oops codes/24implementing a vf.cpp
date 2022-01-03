//Example of implementing a Virtual function

//raise_sal() is declared as virtual in emp class.
//Each derived class overrides this fun and implements in its own way.
//This fun is called using base class ref for each obj (i.e obj of hr, manager, executive)

#include<iostream>
using namespace std;
class emp
{
protected:
    int sal;
public:
    virtual void raise_sal()
    {   //This is a base class fun. It doesn't raise sal.
        sal=sal*1;
    }
    void set(int x)
    {
        sal=x;
    }
    void get()
    {
        cout<<"sal ="<<sal<<endl;
    }
};
class hr:public emp
{
public:
    void raise_sal()
    {
        //Hr class raise sal by 5%
        sal=sal+sal*.05;
    }
};
class manager:public emp
{
public:
    void raise_sal()
    {
        //manager class raise sal by 7%
        sal=sal +sal*.07;
    }
};
class executive:public emp
{
public:
    void raise_sal()
    {
        //executive class raise sal by 9%
        sal=sal +sal*.09;
    }
};

int main()
{
    //create objects of each classes.
     hr obj_hr;
    manager obj_m;
    executive obj_e;

    //base ref pointing to hr obj
    emp &ref1= obj_hr;
    ref1.set(1000);
    ref1.raise_sal();//hr's fun will be called.
    ref1.get();

    //base ref pointing to manager obj
    emp &ref2=obj_m;
    ref2.set(2000);
    ref2.raise_sal();//manager's fun will be called.
    ref2.get();

    //base ref pointing to executive obj.
    emp &ref3=obj_e;
    ref3.set(3000);
    ref3.raise_sal();//executive's fun will be called.
    ref3.get();

}
