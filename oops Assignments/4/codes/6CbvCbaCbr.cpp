/*
oops assignment4
Q6- WAP to swap two variables using Call by value, Call by address, and Call by
Reference ?
*/

#include<iostream>
using namespace std;
void cbv(int x, int y)
{
    int temp;
    temp=x;
    x=y;
    y=temp;
}
void cba(int *x, int *y)
{
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
}
void cbr(int &x, int &y)
{
    int temp;
    temp=x;
    x=y;
    y=temp;
}
int main()
{
    int a=10, b=20;
    cout<<"a and b before CallByValue "<<a<<" "<<b<<endl;
    cbv(a,b);
    cout<<"a and b after CallByValue "<<a<<" "<<b<<endl;

    a=50;
    b=60;
    cout<<"a and b before CallByAddress "<<a<<" "<<b<<endl;
    cba(&a,&b);
    cout<<"a and b after CallByAddress "<<a<<" "<<b<<endl;

    a=45;
    b=54;
    cout<<"a and b before CallByReference "<<a<<" "<<b<<endl;
    cbr(a,b);
    cout<<"a and b after CallByReference "<<a<<" "<<b<<endl;

}

