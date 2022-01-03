//Example of inherited fun.
//There is a fun in base class. If this fun is not created again in derived class then
//it will be inherited by derived class.

#include<iostream>
using namespace std;
class base
{
    public:
        //This fun will be inherited by d1 and d2.
    void inherited_fun()
    {
        cout<<"Inherited function"<<endl;
    }

};
class d1:public base
{
    public:
        //This class contains inherited_fun()

};
class d2 : public d1
{
    public:
        ////This class contains inherited_fun()

};
int main()
{
    d2 obj_d2;
    //d2 class contains inherited_fun() which is inherited from base class.
    obj_d2.inherited_fun();

}
