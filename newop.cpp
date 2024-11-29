#include <iostream>
using namespace std;
int main()
{
	int *p;
	float *q;
	char *r;
	p=new int(10);
	q=new float(1.5);
	r=new char('b');
	cout<<"p="<<*p<<endl<<"q="<<*q<<endl<<"r="<<*r<<endl;
	int size;
	cout<<"enter size:";
	cin>>size;
	int *arr=new int[size];
	cout<<endl<<"Enter array elements:";
	for(int i=0;i<size;i++)
	{
		cin>>arr[i];//or cin>>(arr+i);
	}
	cout<<"elements are ";
	for(int i=0;i<size;i++)
	{
		cout<<arr[i]<<" ";//or cout<<*(arr+i);
	}
	delete arr;
}
