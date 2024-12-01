#include <iostream>
using namespace std;
class base{
    public:
    ~base()
    {
        cout<<"base class destructor";
    }
};
class der:public base{
    public:
    ~der()
    {
        cout<<"derived class destructor"<<endl;
    }
};
int main()
{
    der d;
}