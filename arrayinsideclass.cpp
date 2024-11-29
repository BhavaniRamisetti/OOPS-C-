#include <iostream>
using namespace std;

class stu
{
    private:
        int id;
        string name;
        int sub[6];
    public:
        void get();
        void put();
};

void stu::get()
{
    cout << "Enter id and name: ";
    cin >> id >> name;
    cout << "Enter 6 subjects marks: ";
    for(int i = 0; i < 6; i++)
    {
        cin >> sub[i];
    }
}

void stu::put()
{
    int tot = 0;
    float avg;
    for(int i = 0; i < 6; i++)
    {
        tot += sub[i];
    }
    avg = tot / 6.0;
    cout << "Total = " << tot << endl;
    cout << "Average = " << avg << endl;

    bool hasFailed = false;
    for(int i = 0; i < 6; i++)
    {
        if(sub[i] < 35)
        {
            hasFailed = true;
            break;
        }
    }
    
    if(hasFailed)
    {
        cout << "Student result: Failed" << endl;
    }
    else
    {
        cout << "Student result: Passed" << endl;
    }
}

int main()
{
    stu s;
    s.get();
    s.put();
    return 0;
}

