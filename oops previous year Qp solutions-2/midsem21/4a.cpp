//Ques 4-a

#include<iostream>
using namespace std;
class student
{
    string name;
    int age;
    char section;
public:
    void set(string, int, char );
    void get();
    student operator-(student po1);
    void agegap();


};
void student::set(string x, int y, char z)

{
    name=x;
    age=y;
    section=z;
}
void student::get()
{
    cout<<name<<endl<<age<<endl<<section<<endl;
}
student student::operator-(student po1)
{
    student temp;
    temp.age = age-po1.age;
    return temp;
}
void student::agegap()
{
    cout<<age<<endl;
}
int main()
{
    student obj1, obj2;
    obj1.set("nitin", 30, 'a');
    obj2.set("Amit",25,'b');

    student obj3=obj1-obj2;
    obj3.agegap();


}

