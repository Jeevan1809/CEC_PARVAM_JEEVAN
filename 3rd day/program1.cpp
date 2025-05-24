#include<iostream>
using namespace std;
class student
{
    public:
    student()
    {
        cout << "Default Constructor called!" << endl;
    }
};
int main()
    {
        student s1;
        return 0;
    }