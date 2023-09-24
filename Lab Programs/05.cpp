#include<iostream>
using namespace std;

#include<iostream>
using namespace std;
class student
{
	private:
		string name;
		int rn, eng, hin;
	public:
		void input();
		void disp();
		void total();
};

void student::input()
{
    cout<<"Enter name , rn, eng marks, hin marks"<<endl;
	cin>>name>>rn>>eng>>hin;
	
}
void student::disp()
{
    cout<<"The details of students are "<<endl;
	cout<<name<<" "<<rn<<" "<<eng<<" "<<hin<<endl;
}

void student:: total()
{
    cout<<"Total marks of students are"<<endl;
	cout<<eng+hin<<endl;
}

int main()
{
	student obj1, obj2;
	obj1.input();
	obj1.disp();
	obj1.total();
	
	obj2.input();
	obj2.disp();
	obj2.total();

}	
