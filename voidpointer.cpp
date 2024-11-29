#include <iostream>
using namespace std;
int main()
{
	int a=5;
	void *ptr=&a;
	cout<<"value of a is "<<a<<endl;
	cout<<"address of a is "<<ptr;
	cout<<endl<<"address of a is "<<&a;
	cout<<endl<<"value of a is "<<*static_cast<int*>(ptr);
}
