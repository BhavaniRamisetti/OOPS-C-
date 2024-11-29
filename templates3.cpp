#include <iostream>
using namespace std;
template <class t>
t sum(t a[],int size)
{
	t s=0;
	for(int i=0;i<size;i++)
	{
		s+=a[i];
	}
	return s;
}
int main()
{
	int x[5]={10,20,30,40,50};
	float y[5]={1.2,3.4,4.5,5.6,6.7};
	cout<<"sum of integer elements in an array is "<<sum(x,5)<<endl;
	cout<<"sum of float elements in an array is "<<sum(y,5);
}
