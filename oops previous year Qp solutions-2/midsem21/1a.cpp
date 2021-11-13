//Ques 1-a

#include<iostream>
using namespace std;
class person
{
    int age;
    string name;
public:
    void set(int,string);
    void get();
    person(int,string);
    person();


};

void person::set(int x,string y)
{
    age=x;
    name=y;
}
void person::get()
{
    cout<<age<<endl<<name<<endl;
}
person::person(int x,string y)
{
    age=x;
    name=y;
}
person::person()
{

}
int main()
{
    person *ptr1;
    //create a dynamic array of three objects
    //initialize first and third object in array using parameterized constr
    //Initialize second object using default/Non-parameterized constr.
    ptr1 = new person[3] {person(1,"name1"), person(),  person(3,"name3")} ;
    //Assign value to second object using set function
    ptr1[1].set(2,"name2");

    for(int i=0;i<3;i++)
    {
        ptr1[i].get();
    }

    delete [] ptr1;







}



