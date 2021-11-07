/*
oops assignment4
Q12- On Function overloading with class
Overload the set function two time in student class

*/

#include<iostream>
using namespace std;

class student
{
	private:
	int rn, m1,m2;
	public:
	    //Declare two set functions here, with different parameters
	void set(int , int , int);
	void set(int);
	void get();
	void add();


};
void student::set(int x, int y, int z)
{
    //This set will assign values to all variables
	rn=x;
	m1=y;
	m2=z;
}
void student::set(int x)
{
    //This set will assign values to only rn.
    rn=x;
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
	student obj1, obj2;
	//obj1 is assigned rn=5;
	obj1.set(5,10,20);
	obj1.get();
	//Now change rn of obj1 to 1;
	obj1.set(1);
	obj1.get();

	obj2.set(2,15,15);
	obj2.get();
	obj2.add();



}
