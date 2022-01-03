//array of objects
//array of objects with parameterized constructors
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
    myclass(int x, int y);



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

 myclass::myclass(int x, int y)
 {
    a=x;
    b=y;
 }



 int main()
 {
    int a=10, b=20;
//When array is created, it is necessary to pass parameters as parameterized const is used
//It will be wrong if you write like this myclass obj[5];

    //Create an array of objects, assign values using constructor
    myclass obj[5]= {myclass(a,b) ,
				myclass(1,22),
				myclass(1,33),
				myclass(1,44),
				myclass(1,55)
			 };
    //Print values of each object
    for(int i=0;i<5;i++)
    {
        obj[i].get();
    }




 }
