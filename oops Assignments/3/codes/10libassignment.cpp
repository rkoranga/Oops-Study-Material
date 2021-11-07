//qs-3
#include<iostream>
using namespace std;
class library
{
	string author;
	string title;
	public:
		void display()
		{

				cout<<"AUthor = "<<author<<endl;
				cout<<"Title = "<<title<<endl;

		}
		library()
		{
		}
		library(string x,string y)
		{

		   author=x;
	       title=y;

		}
		char findbyauthor(string z )
		{
		    if(author==z)
            {
		    		return 'y';

			}
			else return 'n';

		}
		char findbytitle(string u)
		{

			if(title==u)
		    {
		    	return 'y';

			}

			else return 'n';

		}
};
int main()
{
	library obj[5]  = { library("author1","title1"),
                        library("author2","title2"),
                        library("author3","title3"),
                        library("author4","title4"),
                        library("author4","title5")

	};

	string author, title;
	cout<<"displaying all book and authors"<<endl;
	int i;
	for(i=0;i<5;i++)
	{

            obj[i].display();

	}

	cout<<"Enter the author you want to find "<<endl;
	cin>>author;
	char found='n';
	for(i=0;i<5;i++)
    {
        found=obj[i].findbyauthor(author);
        if(found=='y') break;

    }
    if(found=='y')
        cout<<"The input author "<<author<<" is **available** in lib"<<endl;
    else
        cout<<"The input author "<<author<<" is not available in lib"<<endl;



    cout<<"Enter the title you want to find "<<endl;
    cin>>title;
    found='n';
	for(i=0;i<5;i++)
    {
        found=obj[i].findbytitle(title);
        if(found=='y') break;
    }
    if(found=='y')
        cout<<"The input title "<<title<<" is **available** in lib"<<endl;
    else
        cout<<"The input title "<<title<<" is not available in lib"<<endl;

}
