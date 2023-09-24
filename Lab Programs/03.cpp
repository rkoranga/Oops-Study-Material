#include<iostream>
#include<string>
using namespace std;

int main()
{
    
    string s;
    cout<<"enter string \n";
    getline(cin,s);

    for(int i=0;i<s.size();i++)
    {
        int duplicate=0;
        for(int j=0;j<s.size();j++)
        {
            
            if( s[i]==s[j] and i!=j)
            {
                duplicate=1;
                break;
            }
        }
        
        if(duplicate==0)
        {
            cout<<s[i]<<" is unique character"<<endl;
        }

    }

}