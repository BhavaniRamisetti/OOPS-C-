#include <iostream>
using namespace std;
class Employee
{
	private:
		int id;
		string name;
		float sal;
		void getemp()
		{
			cout<<"Enter id,name,salary:";
			cin>>id>>name>>sal;
		}
		public:
			void putemp()
			{
				getemp();//calling private function
				cout<<id<<" "<<name<<" "<<sal<<endl;
			}
};
int main()
{
	Employee e;
	e.putemp();//error
}
