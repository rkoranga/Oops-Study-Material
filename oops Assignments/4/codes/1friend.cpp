/*
oops assignment4
Q1- On Friend Function -
Create these three classes - student, lib, degree.
variables:
student will have these variables : rn, m1,m2
lib will have these variables: numofbooks
degree will have these variables: char award_degree;
Functions:
Create set fun in all these classes.
Create a fun get in all these classes.
objects:
Create student_obj and assign value 1,45,60
Create lib_obj and assign value 2
Create degree_obj and do not assign any value.
Friend function:
create a friend fun "check". This friend fun will be called like this
degree_obj = check(student_obj, lib_obj);
degree_obj.get(); // this will print ‘y’ or ‘n’
It will check if total marks >50 in student_obj and numofbooks == 0 in lib_obj. If yes,
then it will set award_degree =’y’ in degree_obj.
*/

#include<iostream>
using namespace std;
//write forward declaration of all classes except the first class
class lib;
class degree;

//define class-1
class student
{
    int rn,m1,m2;
    public:
    void set(int x, int y, int z);
    void get();
    //declare friend fun in each class
    friend degree check(student po1, lib po2);


};
//define fun of class-1
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
//Define class-2
class lib
{
    int nob;
    public:
        void set(int x);
        //write FF in class-2
        friend degree check(student po1, lib po2);


};
//Define fun of class-2
void lib::set(int x)
{

    nob=x;
}

//Define class-3
class degree
{
    private:
        char award_degree;
    public:
        void get();
        //Write FF in class-3
        friend degree check(student po1, lib po2);

};
//Write fun of class-3
void degree::get()
{
    cout<<"Check if degree awarded: "<<award_degree<<endl;
}
//Write the FF after all classes
//Write FF only once.

//Return type of FF should be the object returned by fun.
degree check(student po1, lib po2)
{
    //create a temp result object of class-3
    degree result;
    if(po1.m1+po1.m2 > 50 &&  po2.nob==0)
    {
        //store result in temp result object
        result.award_degree='y';
    }
    else result.award_degree='n';
    //This temp result object will be the returning object
    return result;
}

int main()
{
    //create objects of all three classes
    student obj1;
    lib obj2;
    degree obj3;
    //assign values
    obj1.set(1,45,60);
    obj2.set(2);
    //call FF
    obj3=check(obj1,obj2);
    //Check the value of obj3
    obj3.get();

}
