//Diamond problem solved-1

//In this program the diamond problem is solved by using class name before function.
//There are two copies of function inside d3 -  d1::fun() and d2::fun()
//So using class name resolves the ambiguity.
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
    //This class is blank. But it also inherits fun() from base
};
class d3:public d1, public d2
{

    //This class seems blank but there are two copies of fun() inside this class.
    //These copies are inherited from d1 and d2.

    //d3 contains two copies of base class.
};
int main()
{
    d3 obj_d3; //create an object of d3.
    //obj_d3.fun(); //This is ambiguous. It will cause error
    obj_d3.d1::fun();//ambiguity resolved by specifying the class name.
    obj_d3.d2::fun();//Another way to call the fun().
}
