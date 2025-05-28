<<<<<<< HEAD
#include<iostream>
using namespace std;
class Box
{
public:
    int length;
    Box()
    {
        length = 0;
    }
    Box(int l)
    {
        length = l;
    }
    void display()
    {
        cout << "Length:" << length << endl;
    }
};
int main()
{
    Box b1;
    Box b2(20);
    b1.display();
    b2.display();
    return 0;
=======
#include<iostream>
using namespace std;
class Box
{
public:
    int length;
    Box()
    {
        length = 0;
    }
    Box(int l)
    {
        length = l;
    }
    void display()
    {
        cout << "Length:" << length << endl;
    }
};
int main()
{
    Box b1;
    Box b2(20);
    b1.display();
    b2.display();
    return 0;
>>>>>>> 747b10cc55a8640feb5e24fc3ba356c449b54e36
}