#include <iostream>
using namespace std;
class test2;
class test1
{
	int a;
	public:
		void geta()
		{
			cout<<"Enter a value:";
			cin>>a;
		}
		friend void big(test1,test2);
};
class test2
{
	int b;
	public:
		void getb()
		{
			cout<<"enter b value:";
			cin>>b;
		}
		friend void big(test1,test2);
};
using namespace std;
void big(test1 t1,test2 t2)
{
	if(t1.a>t2.b)
	{
		cout<<t1.a<<" is big";
	}
	else if(t1.a<t2.b)
	{
		cout<<t2.b<<" is big";
	}
	else
	{
		cout<<"equal";
	}
}
int main()
{
	test1 t1;
	test2 t2;
	t1.geta();
	t2.getb();
	big(t1,t2);
}
