//Friend function-2
//A Function is a Member function of one class and Friend function of all other classes.


//add_friend is MF of one class - total
//add_friend is a FF of two classes - subject1 and subject2

//it is called like this obj3.add_friend(obj1, obj2);

#include<iostream>
using namespace std;

class subject2;
class subject1;

class total
{
    int rn,m1,m2;
public:
    void set(int x, int y, int z);
    void get();
    void add_friend(subject1 po1, subject2 po2);//add_friend is a MF of total
};
void total::set(int x , int y, int z)
{
    rn=x;
    m1=y;
    m2=z;
}
void total::get()
{
    cout<<rn<<endl<<m1<<endl<<m2<<endl;
}



class subject1
{
    int rn,m1,m2;
public:
    void set(int x, int y, int z);
    void get();
    //add_friend is a MF of total and friend of subject1;
    friend void total::add_friend(subject1 po1, subject2 po2); //notice the total:: here.
};
void subject1::set(int x , int y, int z)
{
    rn=x;
    m1=y;
    m2=z;
}
void subject1::get()
{
    cout<<rn<<endl<<m1<<endl<<m2<<endl;
}





class subject2
{
    int rn,m1,m2;
public:
    void set(int x, int y, int z);
    void get();
    //add_friend is a MF of total and friend of subject1;
    friend void total::add_friend(subject1 po1, subject2 po2);//***notice the total:: here
};
void subject2::set(int x , int y, int z)
{
    rn=x;
    m1=y;
    m2=z;
}
void subject2::get()
{
    cout<<rn<<endl<<m1<<endl<<m2<<endl;
}

//Define total at last
 void total::add_friend(subject1 po1, subject2 po2)
{
    m1=po1.m1+po2.m1;
    m2=po1.m2+po2.m2;
}


int main()
{
    subject1 obj1;
    subject2 obj2;
    total obj3;
    obj1.set(1,11,11);
    obj2.set(2,22,22);
    obj3.set(3,-1,-1);

    //only obj3 can call the FF
    obj3.add_friend(obj1,obj2);
    obj3.get();


}
