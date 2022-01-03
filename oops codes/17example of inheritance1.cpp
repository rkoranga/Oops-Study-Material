//Example ****without inheritance******.
//Create a class to add two var.
//create another class to add, mul two var.
//create another class to add, mul, div two var.
#include<iostream>
using namespace std;
class A
{
    //add two var in this class.
private:
    int i, j, sum;
public:
    void set(int x, int y)
    {
        i=x;
        j=y;
    }
    void get()
    {
        cout<<i<<endl<<j<<endl<<sum;

    }
    void add()
    {
        sum=i+j;
    }
};

class B
{
    //add and mul two var in this class
private:
    int i, j, sum,prod;
public:
    void set(int x, int y)
    {
        i=x;
        j=y;
    }
    void get()
    {
       cout<<i<<endl<<j<<endl<<sum<<endl<<prod<<endl;

    }
    void add()
    {
        sum=i+j;
    }
    void mul()
    {
        prod=i*j;
    }
};

class C
{
    //add, mul, div two var in this class
private:
    int i, j, sum,prod,quotient;
public:
    void set(int x, int y)
    {
        i=x;
        j=y;
    }
    void get()
    {
        cout<<i<<endl<<j<<endl<<sum<<endl<<prod<<endl<<quotient;

    }
    void add()
    {
        sum=i+j;
    }
    void mul()
    {
        prod=i*j;
    }
    void div()
    {
        quotient=i/j;
    }
};
int main()
{
    //use obj of class c to add, mul, div two var.
    C obj_c;
    obj_c.set(10,20);
    obj_c.add();
    obj_c.mul();
    obj_c.div();
    obj_c.get();
}
