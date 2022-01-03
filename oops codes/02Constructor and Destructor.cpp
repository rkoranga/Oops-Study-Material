//Example of constructor and destructor in a class
//Create a class student with constructor and destructor
//Constructor will assign values to objects
//Destructor will print Destructor is called

#include<iostream>
using namespace std;
class student
{
    private:
    int rn, m1, m2;
    public:
    void set(int x, int y, int z);
    void get();
    void add();
    student(int x, int y, int z); // Constructor
    ~student();


};

void student::set(int x, int y, int z)
{
    rn=x;
    m1=y;
    m2=z;
}

void student::get()
{
    cout<<rn<<endl<<m1<<endl<<m2<<endl;
}

void student::add()
{
    cout<<m1+m2<<endl;
}
student::student(int x, int y, int z)
{
    rn=x;
    m1=y;
    m2=z;
    cout<<"constructor is called"<<endl;

}
student::~student()
{
    cout<<"destructor is called"<<endl;
}


int main()
{
    student obj1(1,11,11),obj2(2,22,22);
    obj1.get();
    obj1.add();

    obj2.get();
    obj2.add();

    if(1)
    {
        student obj3(3,33,33),obj4(4,44,44);
        obj3.get();
        obj3.add();
        obj4.get();
        obj4.add();
    }//obj3 and obj4 destroyed
    student obj5(5,55,55), obj6(6,66,66);
    obj5.get();
    obj5.add();
    obj6.get();
    obj6.add();
}//obj1,2,5,6 destroyed

