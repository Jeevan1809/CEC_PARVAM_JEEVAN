#include<iostream>
using namespace std;

void greet()
{
    cout <<"good morning!"<< endl;
}

void dispalySum(int a, int b)
{
    cout <<"Sum = " << (a+b) << endl;
}

int getNumber()
{
    int num;
    cout <<"Enter a number: ";
    cin >> num;
    return num;
}