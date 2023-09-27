#include<iostream>
using namespace std;

class savingAccount
{
    static int rate;
    float balance;

    public:
        void input()
        {
            cout<<"Enter balance \n";
            cin>>balance;
        }
        void calMonthlyInterest()
        {
            float interest= (balance*rate)/12.0;
            balance= balance+interest;
        }
        void disp()
        {
            cout<<"The balance is : "<<balance<<endl;

        }
        static void modifyInterest(int x)
        {
            rate=x;
        }
};
int savingAccount :: rate=4;

int main()
{
    savingAccount saver1, saver2;
    saver1.input();
    saver2.input();

    cout<<"Current Rate of interest is 4%\n";
    saver1.calMonthlyInterest();
    saver1.disp();

    saver2.calMonthlyInterest();
    saver2.disp();

    cout<<"Setting new interest rate at 5%\n";
    savingAccount::modifyInterest(5);

    cout<<"After setting the interest rate at 5%\n";
    saver1.calMonthlyInterest();
    saver1.disp();

    saver2.calMonthlyInterest();
    saver2.disp();


    
    return 0;
}