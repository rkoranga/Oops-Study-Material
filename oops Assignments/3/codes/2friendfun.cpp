//answer-2
#include<iostream>
using namespace std;

class subject2;			// forward declaration
class total;			// forward declaration

class subject1{
	int rollnum,theory,practical;
	public:
	void set(int a,int b,int c){
		rollnum=a;
		theory=b;
		practical=c;
	}

	friend total findsum(subject1,subject2);
};

class subject2{
	int rollnum,theory,practical;
	public:
	void set(int a,int b,int c){
		rollnum=a;
		theory=b;
		practical=c;
	}
	friend total findsum(subject1,subject2);
};

class total{
	int rollnum,theoryTotal,practicalTotal;
	public:
	void set(int a,int b,int c){
		rollnum=a;
		theoryTotal=b;
		practicalTotal=c;
	}

	friend total findsum(subject1,subject2);

	void display(){
		cout<<"Roll Number : "<<rollnum<<endl
		<<"theoryTotal : "<<theoryTotal<<endl
		<<"practicalTotal : "<<practicalTotal<<endl;
	}
};

total findsum(subject1 s1,subject2 s2){
		total temp;
		temp.rollnum=1;
		temp.theoryTotal=s1.theory + s2.theory;
		temp.practicalTotal=s1.practical + s2.practical;

		return temp;
}

int main(){
	subject1 s1;
	subject2 s2;
	total t1;
	s1.set(1,5,10);
	s2.set(1,95,90);
	t1.set(1,0,0);

	t1=findsum(s1,s2);
	t1.display();

	return 0;
}
