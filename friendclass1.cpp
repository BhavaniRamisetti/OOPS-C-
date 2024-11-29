//we can access all the private members of a class by using friend class
//introduced class-container class-existing class
//declared class where we declared the friend class-contained class
//this relationship is called composition
//resuability
//no extensibility
#include <iostream>
using namespace std;
class test1//container class
{
	int a,b;
	public:
		friend class test2;
		void getab()
		{
			cout<<"Enter a and b values:";
			cin>>a>>b;
		}
};
class test2//contained class
{
	public:
		void putab(test1 t1)
		{
			cout<<"a="<<t1.a<<" b="<<t1.b<<endl;
		}
};
int main()
{
	test1 t1;
	test2 t2;
	t1.getab();
	t2.putab(t1);
}
