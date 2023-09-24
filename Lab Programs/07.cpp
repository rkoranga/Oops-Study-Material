#include<iostream>
using namespace std;

class bank
{
    private:
        string name, type;
        int account;
        float balance;
    public:
        void input();
        void disp();
        void deposit(float amount);
        void withdraw(float amount);
};

void bank::input()
{
    cout<<"Enter name , type, acc#, initial balance"<<endl;
    cin>>name>>type>>account>>balance;
}
void bank::disp()
{
    cout<<"The details are \n";
    cout<<name<<" "<<type<<" "<<account<<" " <<balance<<endl;
}

void bank::deposit(float amount)
{
    balance= balance+amount;
    cout<<"Amount deposited successfully\n";
}
void bank::withdraw(float amount)
{
    if(balance==0 or amount>balance)
    {
        cout<<"Can't Withdraw. Check Balance\n";
    }
    else 
    {
        balance=balance-amount;
    }
}
int main()
{
    bank obj;
    cout<<"Object created. What operations do you want to perfornm\n";

    int choice;
    float amount;
    while(1)
    {
        cout<<"\n\n 1. To input values\n 2. To display values\n 3. To Deposit balance\n 4. To withdraw balance\n 5. To Exit\n";
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
                
                cout<<"enter amount to deposit\n";
                cin>>amount;
                obj.deposit(amount);
                break;
            case 4:
                
                cout<<"enter amount to withdraw\n";
                cin>>amount ;
                obj.withdraw(amount);
                break;

            case 5:
                return 0;
        }
    }
    
}