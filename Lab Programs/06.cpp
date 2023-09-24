#include<iostream>
using namespace std;

class hotel
{
    private:
        string name;
        int room, nod, tariff;
        float calc();
    public:
        void checkin();
        void checkout();

};

void hotel::checkin()
{
    cout<<"Enter name, room#, no of days, tariff"<<endl;
    cin>>name>>room>>nod>>tariff;
}
void hotel::checkout()
{
    cout<<"Details are as follows: \n";
    cout<<name<<" "<<room<<" "<<nod<<" "<<tariff<<endl;
    cout<<"The total amount is "<<calc()<<endl;;
}
float hotel::calc()
{
    
    if(nod*tariff>10000)
    {
        return nod*tariff*1.05;
    }
    else
    { 
        return nod*tariff;
    }
}
int main()
{
    int choice;
    hotel obj;
    while(1)
    {
        obj.checkin();
        obj.checkout();

        cout<<"press 0 to exit any other key to continue:"<<endl;
        cin>>choice;
        if (choice==0)
            break;
    }
    
}