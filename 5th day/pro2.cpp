#include<iostream>
using namespace std;

class user 
{
    public:
    string name;
    string email;

    void login()
    {
        cout << name  <<  "logged  in with email."  << endl;
    }
};


class  costumer: public user
{
    public:
    void product()
    {
         cout << name  << " is a product."<< endl;
    }
};


int main()
{
    costumer c;
  c.name="shiva";
  c.email="shiva@gmail.com";
  c.login();
  c.product();
    return 0;
}
