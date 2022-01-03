//Diamond problem solved-2
//Using Virtual BASE CLASS

//In this program the diamond problem is solved by using a virtual base class
//d1 and d2 will inherit base in virtual mode.
//So only one copy of base class will be made in further inheritance.
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
class d1:virtual public base //***declare base as virtual
{
    //This class is blank. But it inherits fun() from base
};
class d2:virtual public base //***declare base as virtual
{
    //This class is blank. But it also inherits fun() from base
};
class d3:public d1, public d2 //No need to write virtual here
{

    //This class seems blank.
    //But it inherits fun() from d1 and d2.
    //However only **one copy** of fun() is made
    //When the base class is virtual then only one copy of base class is made

    //d3 contains only one copy of base class.
};
int main()
{
    d3 obj_d3; //create an object of d3.

    obj_d3.fun(); //Earlier it was ambiguous. This is not ambiguous now. Bcoz, there is only copy of fun()

    //These statements will still work. Both call the same copy of fun().
    //There is only one copy of fun()
    obj_d3.d1::fun();
    obj_d3.d2::fun();
}
