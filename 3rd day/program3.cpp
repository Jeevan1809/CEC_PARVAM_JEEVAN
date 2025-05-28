<<<<<<< HEAD
#include<iostream>
using namespace std;
class Student
{
public:
    string name;
    int age;
    Student(string n, int a)
    {
        name = n;
        age = a;
    }
    Student(const Student &s)
    {
        name = s.name;

        age = s.age;
    }
    void display()
    {
        cout << "Name:" <<name<< ",Age:" << age << endl;
    }
};
int main()
{
    Student s1("JEEVAN S",20);
    Student s2 = s1;
    s2.display();
    return 0;
=======
#include<iostream>
using namespace std;
class Student
{
public:
    string name;
    int age;
    Student(string n, int a)
    {
        name = n;
        age = a;
    }
    Student(const Student &s)
    {
        name = s.name;

        age = s.age;
    }
    void display()
    {
        cout << "Name:" <<name<< ",Age:" << age << endl;
    }
};
int main()
{
    Student s1("JEEVAN S",20);
    Student s2 = s1;
    s2.display();
    return 0;
>>>>>>> 747b10cc55a8640feb5e24fc3ba356c449b54e36
}