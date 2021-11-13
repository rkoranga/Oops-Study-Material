//Ques 4-b

#include<iostream>
using namespace std;
void reverse(int *p, int n)
{
    for(int i=n-1;i>=0;i--)
    {
        cout<<"element "<<p[i]<<" is at address "<<p+i<<endl;
    }


}



int main()
{
    int ar[10] = {0,1,2,3,4,5,6,7,8,9};
    reverse(ar,10);



}
