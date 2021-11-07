//Object passing
//Create a function to add values of two objects
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
	void add_obj(student po1, student po2);


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
void student::add_obj(student po1, student po2)
{
    m1=po1.m1+po2.m1;
    m2=po1.m2+po2.m2;

}


int main()
{
	student obj1, obj2, obj3;
	obj1.set(1,3,4);
	obj2.set(2,97,96);
	obj3.set(3,-1,-1);//obj3 will store sum of marks of obj2 and obj3

	//Values will be added and copied to the calling object
	obj3.add_obj(obj1,obj2);
	obj3.get();


}
