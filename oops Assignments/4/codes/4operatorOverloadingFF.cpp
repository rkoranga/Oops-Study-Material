/*OOPS assignment4
Q4- On operator overloading using friend operator function
Create a class student.

Write a program to overload +, pre-increment, post-increment
operators for this class using a friend operator function.

Note: In this question a friend operator function is used for a single class. But it can
be used for more than one class.

Inside main create three objects and do these operations.
Obj1.set(1,20,30);
obj2.set(2, 5, 6);
Create obj3;
obj3= obj1+obj2;
obj3.get();
obj3=obj2=obj1;
obj3.get();
obj3 = ++obj2;
obj3.get()
obj2.get()
obj3 = obj2++;
obj3.get();
obj2.get();


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
	/*Overloaded operator functions using Member Functions are declared like this:
	student operator+(student po1);//overloading + operator
	student operator=(student po1);//overloading assignment operator =
	student operator++();//overloading pre-increment operator
	student operator++(int x);//overloading post-inc operator
	*/

	//overloaded operator functions using Friend Function are declared like this:
	//friend keyword is used and there is an extra passing object
	//There is no calling obj, so there will be an extra passing object.
	friend student operator+(student po1,student po2);//overloading + operator using FF
	//assignment operator can't be overloaded using friend fun.
	//friend student operator=(student po1, student po2);
	friend student operator++(student &po1);//overloading pre-increment operator using FF
	friend student operator++(student &po1,int x);//overloading post-inc operator using FF

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
//Overloading + operator:
//There is no calling obj.
//There are two po
//add both po to a temp obj and return this temp obj
//po1.rn,po1.m1,po1.m2 -> passing obj1
//po2.rn, po2.m1, po2.m2 -> passing obj2
student operator+(student po1,student po2)
{
    //create a temp obj
    student temp;
    temp.rn=3;
    //add po1 and po2 to this temp obj
    temp.m1=po1.m1+po2.m1;
    temp.m2=po1.m2+po2.m2;
    //return this temp obj
    return temp;
}

//overloading pre-inc operator
//There is no calling obj
//There is one po and ***it is passed by reference***
//This is done to make permanent changes to this po
student operator++(student &po1)
{
    //create a temp obj
    student temp;
    //assign rn to this temp obj.
    temp.rn=3;
    //inc the po
    ++po1.m1;
    ++po1.m2;
    //copy the po to temp
    temp.m1=po1.m1;
    temp.m2=po1.m2;
    //return the temp obj
    return temp;
}

//overloading the post-inc operator
//There is no calling obj
//There are two parameters: po and int x
//To call post inc operator int x must be specified as parameter
//This int x parameter will not be used in the definition.
student operator++(student &po1,int x)
{
    //First create a temp obj
    student temp;
    //copy the passing object to this temp obj
    temp.rn=3;
    temp.m1=po1.m1;
    temp.m2=po1.m2;
    //Then inc the passing object
    po1.m1++;
    po1.m2++;
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
	//There is no calling obj because it is a FF
	//obj1 is passing obj or po1
	//obj2 is passing obj or po2
	//obj3 is assigning obj
	obj3=obj1+obj2;//overloaded + operator fun is called
	obj3.get();


    cout<<"Pre increment obj2 and assign to obj3"<<endl;
    obj2.set(2,9,19);
    //There is no calling obj
    //obj2 is passing obj or po1
    //obj3 is assigning obj
    obj3=++obj2; //overloaded pre-inc operator fun is called
    obj3.get();
    obj2.get();

    cout<<"Post increment obj2 and assign to obj3"<<endl;
    obj2.set(2,500,600);
    //There is no calling obj because it is a FF
    //obj2 is passing obj or po1
    //obj3 is assigning obj
    obj3=obj2++;//overloaded post-inc operator fun is called.
    obj3.get();
    obj2.get();

}
