<<<<<<< HEAD
#include<iostream>
using namespace std;
class Sample
{
    int *data;
public:
    Sample()
    {
        data = new int;
        *data = 10;
        cout<<"Constructor: Memory allocated."<<endl;
    }
    ~Sample()
    {
        delete data;
        cout<<"Destructor: Memory released."<<endl;
    }
};
int main()
{
    Sample s1;
    return 0;
=======
#include<iostream>
using namespace std;
class Sample
{
    int *data;
public:
    Sample()
    {
        data = new int;
        *data = 10;
        cout<<"Constructor: Memory allocated."<<endl;
    }
    ~Sample()
    {
        delete data;
        cout<<"Destructor: Memory released."<<endl;
    }
};
int main()
{
    Sample s1;
    return 0;
>>>>>>> 747b10cc55a8640feb5e24fc3ba356c449b54e36
}