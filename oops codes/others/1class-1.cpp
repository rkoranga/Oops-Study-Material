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
    myclass obj1,obj2;
    obj1.set(10,20);
    obj1.get();
    obj1.add();

    obj2.set(90,100);
    obj2.get();
    obj2.add();

 }
