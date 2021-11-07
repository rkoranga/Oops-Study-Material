/* Functions defined inside a class always inline
so there is no need to write inline while defining the functions inside the class */

#include <iostream>
using namespace std;
class operation
{
	int a,b;

public:
	void set(){
	cout<<"Enter two values : ";
	cin>>a>>b;
	}

	void sum(){

	cout << "Addition of two numbers : " << a+b << "\n";
	}
};

int main(){
	cout << "Program using inline function\n";
	operation s;
	s.set();
	s.sum();

    return 0;
}
