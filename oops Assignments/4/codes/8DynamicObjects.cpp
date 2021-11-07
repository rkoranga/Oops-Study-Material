
/*
oops assignment4
Q8- On Dynamic Objects using new operator.
WAP to create a class student.

Create an array of objects dynamically using new operator.
The number of objects in array should be input by user during runtime.

During runtime , input the value 3 and call set , get, add fun for these 3 dynamic
objects.

*/

#include<iostream>
using namespace std;
 class student
 {
    private:
    int rn,m1,m2;
    public:
    void set(int x , int y,int z);
    void get();
    void add();


 };

 void student::set(int x , int y,int z)
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
    int n;
    cout<<"How many elements do you want in array of objects "<<endl;
    cin>>n;
    //create dynamic objects of n elements using new operator:
    //First create a pointer
    student *arr_obj;
    //Use new operator to allocate memory for three objects
    arr_obj=new student[n];

    //Calling set function for these objects using loop
    for(int i=0; i<n;i++)
    {
        int a,b,c;
        cout<<"input values for object: "<<i<<endl;
        cin>>a>>b>>c;
        arr_obj[i].set(a,b,c);
    }
    //calling get function for these objects using loop
    for(int i=0;i<n;i++)
    {
        cout<<"print values for object: "<<i<<endl;
        arr_obj[i].get();
    }
    //calling add fun for these obj using loops
    for(int i=0;i<n;i++)
    {
        cout<<"print sum for object: "<<i<<endl;
        arr_obj[i].add();
    }

 }
