/* this pointer is used to get the address of current object
distinguish data members and member function arguments when are declared with the same name
static members will not have this pointer
*/
#include <iostream>
using namespace std;
class Test
{
	int a,b;
	public:
		void show()
		{
			a=10;
			b=20;
			cout<<"obj address="<<this<<endl;
			cout<<"a="<<this->a<<endl;
			cout<<"b="<<this->b<<endl;
		}
};
int main()
{
	Test t;
	t.show();
}
