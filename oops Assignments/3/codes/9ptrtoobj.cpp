#include<iostream>
using namespace std;
class student
{
    private:
    int rn,m1,m2;
    public:
    void set(int, int, int);
    void get();
    void add();
};

void student::set(int x, int y, int z)
{
    rn=x;
    m1=y;
    m2=z;
}

void student::add()
{
    cout<<m1+m2<<endl;
}

void student::get()
{
    cout<<rn<<endl<<m1<<endl<<m2<<endl;
}

int main()
{
    student obj1;
    student *ptr1;
    ptr1=&obj1;
    ptr1->set(1,50,70);
    ptr1->get();
    ptr1->add();

    student obj2;
    student *ptr2;
    ptr2=&obj2;
    ptr2->set(1,2,8);
    ptr2->get();
    ptr2->add();



}
