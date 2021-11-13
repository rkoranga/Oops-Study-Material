//Ques 1-b(ii)

#include<iostream>
using namespace std;
//distance is an inbuilt function so use name distance1
class distance1
{
    int m;
    int cm;
public:
    void input();
    void disp();
    //This function will add two objects to a temp obj and return that object.
    //return type will be distance1 as it returns a temp obj.
    distance1 add(distance1 po1, distance1 po2);


};
void distance1::input()
{
    int x;
    int y;
    cin>>x>>y;
    m=x;
    cm=y;


}
void distance1::disp()
{
    cout<<m<<endl<<cm<<endl;
}
distance1 distance1::add(distance1 po1, distance1 po2)
{
    distance1 temp;
    int totalcm, totalm, extra_m, remaining_cm ;
    totalcm= po1.cm + po2.cm;
    totalm= po1.m + po2.m;
    if(totalcm > 100)
    {
        extra_m = totalcm/100;
        remaining_cm = totalcm%100;
        temp.m=totalm+extra_m;
        temp.cm=remaining_cm;
    }
    else
    {
            temp.m=totalm;
            temp.cm=totalcm;
    }
    return temp;

}

int main()
{
    distance1 obj1, obj2,obj3;
    obj1.input();
    obj2.input();
    obj3=obj1.add(obj1,obj2);
    obj3.disp();
}

