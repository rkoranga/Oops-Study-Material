 #include<iostream>
using namespace std;
int main()
{
    int n;
    float charge,scharge;
    string name;
    cout<<"\n enter name and number of units consumed";
    cin>>name;
    cin>>n;
    if(n<=100)
        charge=(0.60*n);
    if(n>100 && n<=300)
    {
        
        charge=  100*.6 +(n-100)*0.80;
    }
    if(n>=300)
    {
        
        charge= 100*.6 + 200*.8 +(n-300)*0.90;
    }
    if(charge<50)
        charge=50;
    if(charge>300)
    {
        scharge=(0.15*charge);
        charge= charge + .15*charge;
    }

    cout<<"electricity bill \n";
    cout<<name<<" : : rs"<<charge;
    
    
}