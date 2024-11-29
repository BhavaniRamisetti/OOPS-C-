#include <iostream>
#include <string>
using namespace std;

class student
{
	int id;
	string name;
	public:
		void get();
		void put();
};
void student::get()
{
	cout<<"Enter id and name:";
	cin>>id>>name;
}
void student::put()
{
	cout<<endl<<"ID:"<<id<<" "<<"name:"<<name<<endl;
	
}
int main()
{
	student s[60];//array of objects,but static size
	int n;
	cout<<"enter number of students[1-60]:";
	cin>>n;
	if(n<1 || n>60)
	{
		cout<<endl<<"value 1-60 olny";
	}
	else
	{
		for(int i=0;i<n;i++)
		{
			s[i].get();
		}
	}
	cout<<"student records are";
	for(int i=0;i<n;i++)
	{
		(s[i].put());
	}
}
