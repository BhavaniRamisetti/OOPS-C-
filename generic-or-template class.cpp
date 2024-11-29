#include <iostream>
using namespace std;
template <class t>
class test//class template
{
	t a,b;
	public:
		void get()
		{
			cin>>a>>b;
		}
		t sum();
};
template <class t>
t test<t>::sum()
{
	return a+b;
}
int main()
{
	test <int> t1;
	test <float> t2;
	cout<<"enter 2 integers:";
	t1.get();
	cout<<"enter 2 floats:";
	t2.get();
	cout<<"integer sum is "<<t1.sum();
	cout<<endl<<"float sum is "<<t2.sum();
}
