#include <iostream>
using namespace std;
//structures are the foundation of oops
//structure data is completely public,that's why classes are introduced
struct Student
{
	char name[20];
	int id;
	void getData()
	{
		cout<<"Enter student name and id:";
		cin>>name>>id;
		cout<<"ID:"<<id<<" "<<"Name:"<<name<<endl;
	}
}s;//s is instance of structure s
int main()
{
	s.getData();
}
