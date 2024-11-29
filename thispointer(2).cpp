//this pointer is used when local variables and formal parameters are same
//this avoids confusion between them
#include <iostream>
using namespace std;
class Test
{
	int a,b;
	public:
		void show(int a,int b)
		{
			this->a=a;
			this->b=b;
		}
		void display()
		{
			cout<<"a="<<a<<endl;
			cout<<"b="<<b<<endl;	
		}
};
int main()
{
	Test t1,t2;
	t1.show(1,2);
	t2.show(9,8);
	t1.display();
	t2.display();
}
