//Friend function-1
//A function is a friend function of all classes

//Create three classes subject1, subject2, total.
//Create one objects each of subject1, subject2 and total.
//add objects of subject1, subject2 and copy to total.


#include<iostream>
using namespace std;
class subject2; //forward declaration
class total; //forward declaration

class subject1
{
private:
    int theorymarks, pracmarks;
public:
    void set(int , int );
	void get();
	friend total add_friend(subject1 po1, subject2 po2);

};
//write functions of subject1:
//Friend function must be written after all classes. otherwise there will be error.
void subject1::set(int x, int y)
{
	theorymarks=x;
	pracmarks=y;
}

void subject1::get( )
{
    cout<<theorymarks<<endl<<pracmarks<<endl;
}


class subject2
{
    private:
    int theorymarks, pracmarks;
    public:
    void set(int , int );
	void get();
    friend total add_friend(subject1 po1, subject2 po2);

};

//write functions of subject2:
//Friend function must be written after all classes. otherwise there will be error.
void subject2::set(int x, int y)
{
	theorymarks=x;
	pracmarks=y;
}

void subject2::get( )
{
    cout<<theorymarks<<endl<<pracmarks<<endl;
}




class total
{
    private:
    int theorytotal, practotal;
    public:
    void set(int , int );
	void get();
    friend total add_friend(subject1 po1, subject2 po2);

};

//write functions of total class:
//Friend function must be written after all classes. otherwise there will be error.
void total::set(int x, int y)
{
	theorytotal=x;
	practotal=y;
}
void total::get( )
{
    cout<<theorytotal<<endl<<practotal<<endl;
}

/////friend function is written only once
/// it must be written at last after all the classes.
total add_friend(subject1 po1, subject2 po2)
{
    total temp;
    temp.theorytotal= po1.theorymarks+po2.theorymarks;
    temp.practotal= po1.pracmarks+po2.pracmarks;
    return temp;
}


int main()
{
	subject1 s1;
	subject2 s2;
	total t;
	s1.set(99,98);
	s2.set(1,2);

	//Add values of objects s1 and s2 and store in t;
	t=add_friend(s1,s2);

	//print details of t:
	t.get();

}
