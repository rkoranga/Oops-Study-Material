//8 this pointer
#include <iostream>
using namespace std;

class Employee {
   	   int id;
       string name;
       float salary;

	   public:
     	Employee(int id, string name, float salary){
			this->id = id;
	        this->name = name;
			this->salary = salary;
		}

	    void display(){
	    	cout<<id<<"  "<<name<<"  "<<salary<<endl;
	    }
};

int main(void) {
    Employee e1(1,"Anuj",10000);
    Employee e2(2,"Tanuj",20000);
    e1.display();
    e2.display();
    return 0;
}
