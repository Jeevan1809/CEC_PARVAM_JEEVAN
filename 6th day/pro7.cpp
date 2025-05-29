#include <iostream>
using namespace std;

class Animal
{
public:
    virtual void sound() = 0; // pure virtual function
    virtual ~Animal() {}      // virtual destructor
};

class Dog : public Animal
{
public:
    void sound() override
    {
        cout <<"Dog says: Woof!" << endl;
    }
};

class Cat : public Animal
{
public:
    void sound() override
    {
        cout << "cat says: meow!" << endl; 
    }
};
int main()
{
    Animal *a1 = new Dog();
    Animal *a2 = new Cat();

    a1->sound();
    a2->sound();

    return 0;
}