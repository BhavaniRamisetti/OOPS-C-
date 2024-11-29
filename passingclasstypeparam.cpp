#include <iostream>
using namespace std;
class Sample
{
	private:
		int a;
	public:
		void geta()
		{
			cout<<"Enter a:";
			cin>>a;
		}
		void puta()
		{
			cout<<"a= "<<a<<endl;
		}
		void big(Sample s2)
		{
			if(a>s2.a)
			{
				cout<<endl<<a<<" is big";
			}
			else if(a<s2.a)
			{
				cout<<endl<<s2.a<<" is big";
			}
			else
			{
				cout<<endl<<"equal";
			}
		}
};
int main()
{
	Sample s1,s2;
	s1.geta();
	s2.geta();
	s1.puta();
	s2.puta();
	s1.big(s2);//s1 is implicit and s2 is explicit
}
