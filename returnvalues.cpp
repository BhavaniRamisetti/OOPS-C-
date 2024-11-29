#include <iostream>
using namespace std;
class Test
{
	int a,b;
	public:
		void read(int x,int y)
		{
			a=x;
			b=y;
		}
		void show()
		{
			cout<<"a="<<a<<endl;
			cout<<"b="<<b<<endl;
		}
		int big()
		{
			if(a>b)
			{
				return a;
			}
			else
			{
				return b;
			}
		}
};
int main()
{
	Test t;
	t.read(10,20);
	t.show();
	cout<<"maximum value is "<<t.big();
}

