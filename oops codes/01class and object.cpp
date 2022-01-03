//Example of class and object
//Create a class student and Create two objects of this class.

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

int main()
{
    student obj1,obj2;
    obj1.set(1,20,30);
    obj1.get();
    obj1.add();

    obj2.set(2,90,80);
    obj2.get();
    obj2.add();

}
