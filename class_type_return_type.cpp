#include <bits/stdc++.h>
using namespace std;
class Test
{
    private:
    int a,b;
    public:
    void get();
    void put();
    Test sum(Test);
};
void Test::get()
{
    cout<<"Enter a and b:";
    cin>>a>>b;
}
void Test::put()
{
    cout<<"a value is "<<a<<endl;
    cout<<"b value is "<<b<<endl;
}
Test Test::sum(Test t2)
{
    Test t3;
    t3.a=a+t2.a;
    t3.b=b+t2.b;
    return t3;
}
int main()
{
    Test t1,t2,t3;
    t1.get();
    t2.get();
    t1.put();
    t2.put();
    t3=t1.sum(t2);
    t3.put();
}