#include<iostream>
using namespace std;

class mytime
{
    int min,hr,sec;
    public:
        mytime()
        {
            min=hr=sec=0;
        }
        mytime(int x, int y, int z)
        {
            hr=x;
            min=y;
            sec=z;
        }
        void input()
        {
            cout<<"Enter min, sec, hr values of time\n";
            cin>>hr>>min>>sec;
        }
        void disp()
        {
            cout<<"Displaying time :"<<endl;
            cout<<hr<<":"<<min<<":"<<sec<<endl;
        }
        mytime add(mytime obj2)
        {
            mytime obj3;
            obj3.hr=hr+obj2.hr;
            obj3.min=min+obj2.min;
            obj3.sec=sec+obj2.sec;

            if(obj3.sec >59)
            {
                obj3.min = obj3.min + obj3.sec/60;
                obj3.sec = obj3.sec%60;
            }

            if(obj3.min>59)
            {
                obj3.hr = obj3.hr + obj3.min/60;
                obj3.min = obj3.min%60;
            }

            if(obj3.hr>11)
            {
                obj3.hr = obj3.hr%12;
            }

            return obj3;
        }

};
int main()
{
    mytime obj1(5,35,15), obj2, obj3; 
    obj2.input(); 

    obj3=obj1.add(obj2);
    obj3.disp();

    //Test1   6 24 44  output: 11:59:59
    //Test2   6 24 45  output: 0:0:0
    //Test3   6 23 45  output: 11:59:0
    return 0;
}