//use of this pointer
#include<iostream>
using namespace std;
class student
{
    private:

//These variables will become hidden
//becoz of x, y, z in fun parameters	
    int x, y,z;
    public:
    void set(int x, int y, int z);
    void get();

};


void student::set(int x, int y , int z)
{
//to use x,y,z, from above use
//this pointer.
    this->x=x;
    this->y=y;
    this->z=z;
}

void student::get()
{
    cout<<x<<endl<<y
	<<endl<<z<<endl;
}

int main()
{
    student obj1, ojb2;
    obj1.set(1,10,20);
    obj1.get();


}


