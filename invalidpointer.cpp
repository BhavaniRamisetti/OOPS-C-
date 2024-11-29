#include <iostream>
using namespace std;
int main()
{
	int *ptr1;//ptr1 is an invalid pointer
	int a[10]={1,2,3,4};
	int *ptr=a+50;//ptr is invalid because it is outside of bounds of array
	cout<<"base address of a is "<<ptr;
	cout<<endl<<"base address of a is "<<a;
	cout<<endl<<"base address of a is "<<&a[0];
	cout<<endl<<"a[0] is "<<*ptr<<endl;
	cout<<ptr1;
}
