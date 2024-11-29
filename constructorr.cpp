//constructor is a special member funcn to initialize objects
//same as class name
//no return type including void
//constructors&destructors should be declared public
//can overload constructors
//cannot find the address of constructors
//not performed in inheritance
//can make implicit calls to new and delete operators
//can have default arguments
//constrcutor executed only once when object is created, further calls are not alllowed
//deafult,parameterized and copy constructors are types
#include <iostream>
using namespace std;
class test
{
	int a,b;
	public:
		test()//constructor
		{
			a=10;
			b=20;
		}
		void show()
		{
			cout<<"a="<<a<<" "<<"b="<<b;
		}
};
int main()
{
	test t;
	t.show();
}
