//friend function is able to access the private members of a class
//it is not a member of the class
//violates data hiding
//private,public or protected
//it should declared with 'friend' keyword inside the class
//definition is outside the clsas without using friend keyword
//objects as arguments
//these are normal functions
//invoked like the normal functions
//objectname.--:accessing
#include <iostream>
using namespace std;
class sample
{
	int a,b;
	friend void print(sample);//declaration
};
void print(sample s)//friend function definition
{
	s.a=10;
	s.b=20;
	cout<<"a="<<s.a<<" b="<<s.b<<endl;
}
int main()
{
	sample s;
	print(s);//calling
}
