#include <iostream>
using namespace std;
class sample
{
	int a,b,c;
	public:
		sample(int x=10,int y=20,int z=30)
		{
			a=x;
			b=y;
			c=z;
		}
		void show()
		{
			cout<<"a="<<a<<" b="<<b<<" c="<<c<<endl;
		}
};
int main()
{
	sample s1(1,2,3);
	sample s2(1,2);
	sample s3(1);
	sample s4;
	s1.show();
	s2.show();
	s3.show();
	s4.show();
}
