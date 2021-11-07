//answer-6
#include<iostream>
using namespace std;

class test{
	static int count;
	public:
		test(){
			count++;
			cout<<"Object created. Count= "<<count<<endl;
		}

		~test(){
			count--;
			cout<<"Object destroyed. Count= "<<count<<endl;

		}
};
int test :: count;
int main(){
	test c1,c2;

	while(1)// local block 1
    {
        test c3, c4;
        break;
    }
	test c5, c6;
	if(1) // local block 2
    {
        test c7, c8;
    }
	test c9, c10;

	return 0;
}
