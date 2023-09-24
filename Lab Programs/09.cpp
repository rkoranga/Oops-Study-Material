#include<iostream>
#include<cmath>
using namespace std;

void area(int x)
{
    cout<<"Area of square is "<<x*x<<endl;
}

void area(int x, int y)
{
    cout<<"Area of rectangle is "<<x*y<<endl;
}

void area(int x, int y, int z)
{
    float s=(float)(x+y+z)/2; 
    float area=sqrt(s*(s-x)*(s-y)*(s-z)); 
    cout<<"Area="<<area<<endl;
}


int main()
{

    int choice,x,y,z;
    while(1)
    {
        cout<<"1. For square\n 2. For rectangle\n 3. For triangle\n 4. To exit\n";
        cin>>choice;
        switch(choice)
        {
            case 1:
                cout<<"enter side: \n";
                cin>>x;
                area(x);
                break;
            case 2:
                cout<<"Enter len and breadth \n";
                cin>>x>>y;
                area(x,y);
                break;
            case 3:
                cout<<"Enter s1, s2, s3 \n";
                cin>>x>>y>>z;
                area(x,y,z);
                break;
            case 4:
                return 0;
        }
    }

}