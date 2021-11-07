#include<iostream>
using namespace std;

class student{
	int rollnum,marks1,marks2;
	public:
		void set(int a,int b,int c){
			rollnum=a;
			marks1=b;
			marks2=c;
		}
		void get()
		{
		    cout<<rollnum<<endl<<marks1<<endl<<marks2<<endl;
		}

		void addition(student s1,student s2){ // parameterized constructor
			marks1=s1.marks1 + s2.marks1;
			marks2=s1.marks2 + s2.marks2;
			rollnum=3;

		}
};

int main(){
	student obj1,obj2,obj3;
	obj1.set(1,99,2);
	obj2.set(2,1,98);
	obj3.set(0,0,0);

	obj3.addition(obj1,obj2);	// object passing
    obj3.get();
	return 0;
}
