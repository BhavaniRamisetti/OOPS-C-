#include <iostream>
#include <string>
using namespace std;
class author//container class
{
	string aname;
	friend class book;
};
class book//contained class
{
	string bname;
	float price;
	author a;//composition
	public:
		void get()
		{
			cout<<"enter author name:";
			cin>>a.aname;
			cout<<"enter book name:";
			cin>>bname;
			cout<<"enter the price of the book:";
			cin>>price;
		}
		void show()
		{
			cout<<"author name:"<<a.aname<<endl;
			cout<<"book name:"<<bname<<endl;
			cout<<"price of the book is "<<price;		
		}
};
int main()
{
	book b;
	b.get();
	b.show();
}
