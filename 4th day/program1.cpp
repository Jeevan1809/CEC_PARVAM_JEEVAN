#include<iostream>
using namespace std;

class ATM
{
    private:
    int pin=1234;
    double balance=5000.0;

    bool verifypin(int enteredpin)
    {
        return enteredpin==pin;
    }
    public:
    void withdrawnCash(int enteredpin,double amount)
    {
    if (verifypin(enteredpin))
    {
    if (amount <= balance)
    {
        balance -= amount;
        cout<<"Withdrawal successful. Remaining balance:"<<balance<<endl;
    }
    else
    {
        cout<<"Invalid pin!"<<endl;
    }
    }
    }

    void checkBlance(int enteredpin)
    {
        if(verifypin(enteredpin))
        {
            cout<<"Your balance is:"<<balance<<endl;
        }
        else
        {
            cout<<"Invalid Pin!"<<endl;
        }
    }
};

int main()
{
    ATM myATM;
    myATM.withdrawnCash(1234,5000);
    myATM.checkBlance(1234);

    myATM.withdrawnCash(1111,7000);
    return 0;
}