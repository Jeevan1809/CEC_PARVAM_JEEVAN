#include<iostream>
using namespace std;

class Student
{
private:
    int rollNumber;

public:
    void setRollNumber(int r)
    {
        rollNumber = r;
    }

    int getRollnumber()
    {
        return rollNumber;
    }
};

int main()
{
    Student s1;
    s1.setRollNumber(101);
    cout<<s1.getRollnumber()<<endl;
    return 0;
}