#include<iostream>
using namespace std;

class Car{
    public:
      string brand;
      void start(){
        cout<<brand<<" car Started!"<<endl;
      }
};

int main(){
    Car c1;
    c1.brand="TATA SUMO";
    c1.start();
    Car c2;
    c2.brand="Honda";
    c2.start();
    Car c3;
    c3.brand="hundai";
    c3.start();
    return 0;
}