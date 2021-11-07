
/*
oops assignment4
Q11- On Function Overloading
Do not use any class. Overload a simple sum function three times without any class.

*/

#include<iostream>
using namespace std;
//Three fun are created.
//All have same name i.e add. So this is called fun overloading
//But the parameters in all three fun are different.

void add(int x, int y)
{
    cout<<"fun with two parameters"<<endl;
    cout<<x+y<<endl;

}
void add(int x, int y, int z)
{
    cout<<"fun with three parameters"<<endl;
    cout<<x+y+z<<endl;
}
void add(char x, char y)
{
    cout<<"fun with character parameters"<<endl;
    cout<<x+y<<endl;
}
int main()
{
    //call the add fun with different parameters.
    add(1,19);//output will be 20
    add(10,10,10);//output will be 30
    add('a', 'b');//output will be ascii value of a and b = (97+98=195)
}


