//Inline-1
//Inline a function without any class
#include<iostream>

using namespace std;
//Simply use inline keyword
inline void add(int x, int y)
{
    int sum=x+y;
    cout<<sum;
}

int main()
{
    int a=10, b=20;
    add(a,b);


}
