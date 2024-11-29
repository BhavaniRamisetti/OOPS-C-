/*
initializing through a member function
*/
#include <iostream>
using namespace std;
class test
{
	/*int a=10,b=20;//not allowed*/
	int a,b;
	public:
		void get()
		{
			a=10;
			b=20;
		}
};
void main()
{
	test t;
	/*test t={10,20} when a nad ba re declared public-against data hiding concept*/
	t.get();
}
