/*
Operator overloading using member operator function

Create a class student. Write a program to overload + , = , pre-increment, postincrement operators
for this class using member operator function.




*/
#include<iostream>
using namespace std;

class student
{
	private:
	int rn, m1,m2;
	public:
	void set(int , int , int);
	void get();
	void add();
	//Declaring all the operator overloading functions.
	//**THESE FUNCTIONS ARE MEMBER FUNCTIONS *******
	student operator+(student po1);//overloading + operator
	student operator=(student po1);//overloading assignment operator =
	student operator++();//overloading pre-increment operator
	student operator++(int x);//overloading post-inc operator


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
//Overloading + operator: add calling obj and po to a temp obj
//return this temp obj
//rn,m1,m2 -> calling obj
//po1.m1, po2.m2 -> passing obj
student student::operator+(student po1)
{
    student temp;
    temp.rn=3;
    temp.m1=m1+po1.m1;
    temp.m2=m2+po1.m2;
    return temp;
}
//overloading the assignment operator.
//rn,m1,m2 -> calling obj
//po1.m1, po2.m2 -> passing obj
student student::operator=(student po1)
{
    //rn is not copied, only marks are copied.
    m1=po1.m1;
    m2=po1.m2;
    //*this will return the calling object.
    return *this;
}
//overloading pre-inc operator
//m1,m2 -> for calling object
student student::operator++()
{

    ++m1;
    ++m2;
    //*this will return the calling obj
    return *this;
}
//overloading the post-inc operator
//To call post inc operator int x must be specified as parameter
//This int x parameter will not be used in the definition.
student student::operator++(int x)
{
    //First create a temp obj
    student temp;
    //copy the calling object to this temp obj
    temp.m1=m1;
    temp.m2=m2;
    //Then inc the calling object
    m1++;
    m2++;
    //Return the temp object;
    return temp;
}



int main()
{
	student obj1, obj2, obj3;
	obj1.set(1,3,4);
	obj2.set(2,97,96);
	obj3.set(3,-1,-1);
	cout<<"Add obj1 and obj2 and copy to obj3"<<endl;
	//obj1 is calling obj
	//obj2 is passing obj
	//obj3 is assigning obj
	obj3=obj1+obj2;//overloaded + operator fun is called
	obj3.get();

	cout<<"Assign obj1 to obj2 and obj3"<<endl;
	obj1.set(1,30,40);
	//obj2 is calling obj
	//obj1 is passing obj
	//obj3 is assigning obj
	obj3=obj2=obj1;//overloaded (=) assignment operator fun is called
	obj3.get();

    cout<<"Pre increment obj2 and assign to obj3"<<endl;
    obj2.set(2,9,19);
    //obj2 is calling obj
    //No passing obj
    //obj3 is assigning obj
    obj3=++obj2; //overloaded pre-inc operator fun is called
    obj3.get();


    cout<<"Post increment obj2 and assign to obj3"<<endl;
    obj2.set(2,500,600);
    //obj2 is calling obj
    //No passing obj
    //obj3 is assigning obj
    obj3=obj2++;//overloaded post-inc operator fun is called.
    obj3.get();
    obj2.get();




}
