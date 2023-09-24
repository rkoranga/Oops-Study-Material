#include<iostream>
using namespace std;

class toll
{   
    private:
        int count=0;
        float total=0;
    public:
        void payingCar()
        {
            cout<<"Paying car passed\n";
            count++;
            total+=.5;
            
        }
        void nonpayingCar()
        {
            cout<<"Non Paying car passed\n";
            count++;
        }
        void display()
        {
            cout<<"The total count of cars is "<<count<<endl;
            cout<<"The total amount is "<<total<<endl;
        }
};
int main()
{
    toll obj;
    int choice;

    while(1)
    {
        cout<<"\n\n****************************\n";
        cout<<"Enter choice 1. paying car     2. Non paying car    3. Exit\n";
        cin>>choice;

        switch(choice)
        {
            case 1: 
                obj.payingCar();
                break;
            case 2:
                obj.nonpayingCar();
                break;
            case 3:
                obj.display();
                return 0;
        }
    }
    return 0;
}