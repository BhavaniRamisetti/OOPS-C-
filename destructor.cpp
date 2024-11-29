//destructor is used to destroy the objects
//constrcutor constructs the memory and it is deleted by destrcutor
//same as name as class
//preceded with tild operator(~)
//never takes arguments
//cannot overload hte destructors
//implicit class to new and delete
//not paticipated in inheritance
#include <iostream>
using namespace std;
class sample
{
	int a,b;
	public:
		sample()
		{
			a=10;
			b=20;
			cout<<"In constructor"<<endl;
		}
		~sample()
		{
			cout<<"a="<<a<<endl;
			cout<<"b="<<b;
			cout<<endl;
			cout<<"in destructor"<<endl;
		}
};
int main()
{
	sample s;
	cout<<endl<<"in main function"<<endl;
}
