//constructor overloading is polymorphism-extend the functionality of constructor
#include <iostream>
using namespace std;
class circle
{
	private:
		float r;
	public:
		circle()//default constructor
		{
			r=2;
		}
		circle(float r)//parameterized constructor
		{
			this->r=r;
		}
		void show()
		{
			cout<<"area is "<<(3.14*r*r)<<endl;
		}
};
int main()
{
	circle c1;
	c1.show();
	circle c2(4);
	c2.show();
}
