//Ques 1-b(i)

#include<iostream>
using namespace std;

class person
{
    int age;
    string name;
public:
    void set(int, string);
    void get();
    friend void compare(person po1, person po2);

};

void person::set(int x, string y)
{
    age=x;
    name=y;
}
void person::get()
{
    cout<<age<<endl<<name<<endl;
}
void compare(person po1, person po2)
{
    if(po1.age>po2.age)
        cout<<po1.name<<" is older"<<endl;
    else
        cout<<po2.name<<" is older"<<endl;
}

int main()
{
    person obj1,obj2;
    obj1.set(1,"name1");
    obj2.set(2,"name2");
    compare(obj1,obj2);
}
