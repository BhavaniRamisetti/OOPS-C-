//copy constructor is used to initilalize current object values with another object values
//used in operator overloading
//having reference type parameters
//class type parameters-means objects
#include <iostream>
using namespace std;
class sample
{
	int a,b;
	public:
		sample(int a,int b)//parameterized constructor
		{
			this->a=a;//or *(this).a=a;
			this->b=b;
		}
		sample(sample &oldobj)//copy constructor
		{
			a=oldobj.a;
			b=oldobj.b;
		}
		void show()
		{
			cout<<"a="<<a<<" "<<"b="<<b<<endl;
		}
};
int main()
{
	sample s1(10,20);//invokes parameterized constructor
	sample s2(s1); 
	s1.show();
	s2.show();
}

