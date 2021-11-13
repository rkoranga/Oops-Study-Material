//Ques 3-b

#include<iostream>
#include<iomanip>
using namespace std;
void assignmodel(int ar[], string model)
{
    if(model=="k10")
        ar[0]++;
    if(model=="zen")
        ar[1]++;
    if(model=="wagonr")
        ar[2]++;
    if(model=="sx")
        ar[3]++;
}

int total(int ar[])
{
    int sum;
    sum=0;
    for(int i =0;i<4;i++)
    {
        sum=sum+ar[i];

    }
    return sum;
}

int main()
{

    char choice='y';
    string inputcity, inputmodel;
    int delhi[4] = {0,0,0,0};
    int mumbai[4] = {0,0,0,0};
    int chennai[4] = {0,0,0,0};
    int kolkata[4] = {0,0,0,0};

    while(choice=='y')
    {



        cout<<"enter city "<<endl;
        cin>>inputcity;
        cout<<"enter model "<<endl;
        cin>>inputmodel;
        if(inputcity=="delhi")
            assignmodel(delhi,inputmodel);
        if(inputcity=="mum")
            assignmodel(mumbai,inputmodel);
        if(inputcity=="chennai")
            assignmodel(chennai,inputmodel);
        if(inputcity=="kol")
            assignmodel(kolkata,inputmodel);

        cout<<"enter more: y or n "<<endl;
        cin>>choice;

    }

    cout<<"print details "<<endl;
    cout<<setw(20)<<"k10"<<setw(15)<<"zen"<<setw(18)<<"wagonr"<<setw(13
                                                                     )<<"sx4"<<endl;
    cout<<"Delhi"<<setw(15)<<delhi[0]<<setw(15)<<delhi[1]<<setw(15)<<delhi[2]<<setw(15)<<delhi[3]<<endl;

    cout<<"Mumbai"<<setw(14)<<mumbai[0]<<setw(15)<<mumbai[1]<<setw(15)<<mumbai[2]<<setw(15)<<mumbai[3]<<endl;

    cout<<"Chenni"<<setw(14)<<chennai[0]<<setw(15)<<chennai[1]<<setw(15)<<chennai[2]<<setw(15)<<chennai[3]<<endl;

    cout<<"kolkat"<<setw(14)<<kolkata[0]<<setw(15)<<kolkata[1]<<setw(15)<<kolkata[2]<<setw(15)<<kolkata[3]<<endl;


    cout<<"print total for each city "<<endl;


    cout<<"Delhi = "<<total(delhi)<<endl;
    cout<<"Mumbai = "<<total(mumbai)<<endl;
    cout<<"Chennai = "<<total(chennai)<<endl;
    cout<<"kolkata = "<<total(kolkata)<<endl;



}
