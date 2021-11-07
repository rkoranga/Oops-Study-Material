//Static-2
//Static variable inside student class
#include<iostream>
using namespace std;
class student
{
    private:

//All objects will have same copy of static
//variable. There will be only one copy of
//static variable which is shared by all
//objects


//Count is static. It is only declared here
//It will be defined later
    static int count; 					 // here, not defined
    int rn, m1,m2;
    public:
    void set(int x, int y, int z);
    student();
    ~student();

};

//***Define count here. Static variable like
//count must be defined outside class**
int student::count;

void student::set(int x, int y , int z)
{
    rn=x;
    m1=y;
    m2=z;
}

//constructor will increment count when
//object is created
student::student()

{
    count++;
    cout<<"object created. count ="<<count<<endl;
}

//Destructor will decrement count when
//object is destroyed.
student::~student()
{
    count--;
    cout<<"object destroyed. count ="<<count<<endl;
}

int main()
{

    student obj1, obj2;
    obj1.set(1,20,30);
    obj2.set(1,60,60);


}
