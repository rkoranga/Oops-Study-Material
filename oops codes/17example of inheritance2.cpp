//Example ****With inheritance******.
//Create a class to add two var.
//derive this class and create fun to add, mul two var.
//further derive this and create fun to add, mul, div two var.
#include<iostream>
using namespace std;
class base
{
    //add two var in this class.
    //use protected not private
protected:
    int i, j, sum;
public:
    void set(int x, int y)
    {
        i=x;
        j=y;
    }
    void add()
    {
        sum=i+j;
    }
};

class d1 : public base
{
    //add and mul two var in this class
    //use protected not private
protected:
    int prod; // i,j,sum are derived from base
public:

    //create only mul fun. add() fun is derived
    void mul()
    {
        prod=i*j;
    }
};

class d2 : public d1
{
    //add, mul, div two var in this class
    //use protected not private

    //The code of d2 becomes much smaller.
protected:
    int quotient; //i,j,sum,prod are derived from base
public:
    void div()
    {
        quotient=i/j;
    }
    void get()
    {
        cout<<i<<endl<<j<<endl<<sum<<endl<<prod<<endl<<quotient<<endl;
    }
};
int main()
{
    //use obj of class d2 to add, mul, div two var.
    d2 obj_d2;
    obj_d2.set(10,20);
    obj_d2.add();
    obj_d2.mul();
    obj_d2.div();
    obj_d2.get();
}
