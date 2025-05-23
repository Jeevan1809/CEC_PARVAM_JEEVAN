#include<iostream>
using namespace std;
class person
{
    public:
    string name ;
    int age ;

    person(){
        name = "jeevan";
        age = 20;
    }

    person(string n, int a)
    {
        name = n ;
        age = a ;
    }
 void display()
 {
    cout <<"name :" << name << ",age:" << age << endl;
 }
};

 int main()
 {
    person p1; 
    person p2("jeevan", 20); 
    p1.display();
    p2.display();
    return 0;
 }