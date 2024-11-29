#include <iostream>
using namespace std;
template <class t1,class t2>
float sum(t1 x,t2 y)//different types
{
	return x+y;
}
int main()
{
	cout<<"int sum is "<<sum(10,20)<<endl;
	cout<<"float sum is "<<sum(1.2,2.3)<<endl;
	cout<<"int,float sum is "<<sum(5,1.5)<<endl;
	cout<<"float,int sum is "<<sum(5.5,6);
}
