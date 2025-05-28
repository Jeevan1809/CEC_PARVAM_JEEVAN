#include<iostream>
#include<string>
using namespace std;

class Vehical
{
private:
    string model;
    int year;

public:
    Vehical(string m, int y)
    {
        model = m;
        year = y;
    }
    void show()
    {
        cout <<"Model: "<< model <<", Year: "<< year << endl;
    }
};

int main()
{
    Vehical *v1 = new Vehical("Toyota Camry",2022);
    Vehical *v2 = new Vehical("Tesla Model 3",2023);

    v1->show();
    v2->show();

    delete v1;
    delete v2;

    return 0;
}