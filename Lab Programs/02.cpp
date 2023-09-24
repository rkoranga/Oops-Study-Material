#include<iostream>
#include<string>
using namespace std;

int main()
{
    string s;
    string res="";
    char c;

    cout<<"input string "<<endl;
    getline(cin,s);
    cout<<"enter character to remove"<<endl;
    cin>>c;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]!=c)
        {
            res=res+s[i];
        }
    }
    cout<<"The result string is : "<<res<<endl;


    
}