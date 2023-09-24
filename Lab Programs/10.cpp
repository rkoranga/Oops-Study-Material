#include<iostream>
using namespace std;

class invoice
{
    int part_no, qty, price;
    string desc;
    public:
    invoice()
    {
       part_no=0;
       desc="";
       qty=0;
       price=0;

    }
    void input()
    {
        cout<<"Enter the values part no, description, qty, price \n";
        cin>>part_no>>desc>>qty>>price;
        if(qty<0)
            qty=0;
        if(price<0)
            price=0;
    }
    void disp()
    {
        cout<<"Entered details are \n";
        cout<<part_no<<" "<<desc<<" "<<qty<<" "<<price<<endl;
    }
    double getInvoiceAmount()
    {
        double amount= qty*price;
        return amount;
    }
};
int main()
{
    invoice obj;
    int choice;
    while(1)
    {
        cout<<"\n\n****************************\n";
        cout<<"Enter choice 1. Input     2. Display    3. Total amount       4. Exit\n";
        cin>>choice;
        switch(choice)
        {
            case 1:
                obj.input();
                break;
            case 2:
                obj.disp();
                break;
            case 3:
                cout<<obj.getInvoiceAmount();
                break;
            case 4: 
                return 0;
        }
    }

    return 0;
}