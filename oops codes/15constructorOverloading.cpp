/*
Constructor overloading.

Create the student class.

Create two constructors for this class.
One with parameters and other without parameters.

Create two objects using different constructors.

*/

//Constructor overloading means there will be two constructors
//Parameterized const and non parameterized const.
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
	//There will be two constructors

	//This constructor is with parameters
	student(int , int , int);

	//This constructor is without parameters
	//It can be used to create obj without passing any values
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
student::student(int x , int y, int z)
{
    //This is parameterized constructor
	rn=x;
	m1=y;
	m2=z;
	cout<<"constructor called"<<endl;
}
student::student()
{
    //This is non parameterized constructor
    cout<<"constructor called"<<endl;

}

int main()
{
    //You can create obj in two ways
    //obj1 is created by passing values, obj2 is created without passing values
	student obj1(1,11,11), obj2;
	obj1.get();
	obj1.add();

    //Call set fun for obj2 to assign values.
	obj2.set(2,22,22);
	obj2.get();
	obj2.add();


}
