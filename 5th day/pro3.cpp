#include<iostream>
using namespace std;

class vehicle 
{
    public:
    void start()
    {
        cout << "vehicle has started." << endl;
    }
};


class car : public vehicle
{
    public:
    void travel()
    {
         cout <<"  to traveling to world trip."<< endl;
    }
};

int main()
{
    car mycar;
    mycar.start();
    mycar.travel();
    return 0;
}

