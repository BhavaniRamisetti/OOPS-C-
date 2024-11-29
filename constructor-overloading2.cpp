#include <iostream>
#include <string>
using namespace std;
class stu
{
	string name,course;
	float fee;
	public:
		stu(string name,string course)
		{
			this->name=name;
			this->course=course;
			fee=0;
		}
		stu(string name,string course,float fee):stu(name,course)//calling constructor
		{
			this->fee=fee;	
		}
		void show()
		{
			cout<<"name:"<<name<<endl;
			cout<<"course:"<<course<<endl;
			cout<<"fee:"<<fee<<endl;
		}
};
int main()
{
	stu s1("bhavani","cpp");
	stu s2("jyothi","maths",25000);
	s1.show();
	s2.show();
}
