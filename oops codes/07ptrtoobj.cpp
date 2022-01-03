//ptr to objects
//Create pointer to objects
//call set , get , add function using pointer to objects

#include<iostream>
using namespace std;
 class myclass
 {
    private:
    int a,b;
    public:
    void set(int x , int y);
    void get();
    void add();


 };

 void myclass::set(int x , int y)
 {
    a=x;
    b=y;
 }

 void myclass::get()
 {
    cout<<a<<endl<<b<<endl;
 }
 void myclass::add()
 {
    cout<<a+b<<endl;
 }

 int main()
 {
//create two objects
    myclass obj1,obj2;
//create two pointers
    myclass *ptr1, *ptr2;
//point to these objects
    ptr1=&obj1;
    ptr2=&obj2;

//now use pointers to assign instead of objects
//obj1.set(10,20) is not used
    ptr1->set(10,20);
    ptr1->get();
    ptr1->add();

    ptr2->set(22,33);
    ptr2->get();
    ptr2->add();

 }
