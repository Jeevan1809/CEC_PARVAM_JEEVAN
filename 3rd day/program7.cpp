<<<<<<< HEAD
#include<iostream>
using namespace std;
class Car
{
public:
    string brand;
    int speed;

    Car()
    {
        brand+"John";
        speed=0;
        cout<<"Default Constructor Called."<<endl;
    }

    Car(string b,int s)
    {
        brand=b;
        speed=s;
        cout<<"Parameterized Constructor called."<<endl;
    }

    Car(const Car &c)
    {
        brand=c.brand;
        speed=c.speed;
        cout<<" Copy Constructor Called."<<endl;
    }

    void drive()
    {
        cout<<"Driving "<<brand<<"at "<<speed<<"km/h."<<endl;
    }
};
int main()
{
    Car car1;
    car1.drive();

    Car car2("Honda",100);
    car2.drive();

    Car car3=car2;
    car3.drive();
    return 0;
=======
#include<iostream>
using namespace std;
class Car
{
public:
    string brand;
    int speed;

    Car()
    {
        brand+"John";
        speed=0;
        cout<<"Default Constructor Called."<<endl;
    }

    Car(string b,int s)
    {
        brand=b;
        speed=s;
        cout<<"Parameterized Constructor called."<<endl;
    }

    Car(const Car &c)
    {
        brand=c.brand;
        speed=c.speed;
        cout<<" Copy Constructor Called."<<endl;
    }

    void drive()
    {
        cout<<"Driving "<<brand<<"at "<<speed<<"km/h."<<endl;
    }
};
int main()
{
    Car car1;
    car1.drive();

    Car car2("Honda",100);
    car2.drive();

    Car car3=car2;
    car3.drive();
    return 0;
>>>>>>> 747b10cc55a8640feb5e24fc3ba356c449b54e36
}