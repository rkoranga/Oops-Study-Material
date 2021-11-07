/*
oops assignment4
Q17- On overloading copy constructor
create a class student.

Overload the default copy constructor for this class.

Create two objects obj1, obj2.

Copy obj1 to obj2 like this -
obj2=obj1; //overloaded copy const will be called.

*/


//Overloading the CC means user will define a CC.
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
	//There are two constructors

	//This is overloaded CC or user Defined CC
	student(student &po);

	//This is a blank constructor for creating obj
	student();


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
student::student(student &po)
{
	rn=po.rn;
	m1=po.m1;
	m2=po.m2;
	cout<<"Overloaded Copy Constructor called"<<endl;
}
student::student()
{

}
int main()
{
	//These obj are created by using blank constructor.
	student obj1, obj2;
	obj1.set(1,11,11);
	obj1.get();
	obj1.add();

	obj2.set(2,22,22);
	obj2.get();
	obj2.add();

	//Two ways to call CC

	//By using assignment operator (=)
	//Here copy constructor is called
	student obj3=obj1;//Copy constructor called. obj1 copied to obj3


	//By calling the CC explicitly
	//Pass the second obj as parameter to first obj
	student obj4(obj1);//Copy constructor called. obj1 copied to obj4

    obj3.get();
    obj4.get();

}
