//Static variable in a class
//count number of objects created and destroyed using static keyword
//Make use of constructors and destructors to count objects created and destroyed.


#include<iostream>
using namespace std;
class student
{
    private:
	//All objects will have same copy of static variable.
	//There will be only one copy of static variable which is shared by all objects
    static int count;  //Count is static. It is only declared here, not defined
    int rn, m1,m2;
    public:
    void set(int x, int y, int z);
    student();
    ~student();

};

int student::count;	//***Define count here. Static variable like count must be defined outside class**

void student::set(int x, int y , int z)
{
    rn=x;
    m1=y;
    m2=z;
}
student::student()   //Constructor will increment count when object is created.
{
    count++;
    cout<<"object created. count ="<<count<<endl;
}
student::~student()	//destructor will decrement count when object is destroyed.
{
    count--;
    cout<<"object destroyed. count ="<<count<<endl;
}

int main()
{

    student obj1,obj2;
    obj1.set(1,11,11);


    obj2.set(2,22,22);

    if(1)
    {
        student obj3,obj4;
        obj3.set(3,33,33);

        obj4.set(4,44,44);

    }//obj3 and obj4 destroyed
    student obj5, obj6;
    obj5.set(5,55,55);


    obj6.set(6,66,66);


}
