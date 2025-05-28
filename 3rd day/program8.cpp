<<<<<<< HEAD
#include<iostream>
using namespace std;

class Car{
    string model;
    int year;

public:
    Car(){
        model="Unknown";
        year=0;
    }
    Car(string m){
        model=m;
        year=0;
    }
    Car(string m, int y){
        model=m;
        year=y;
    }
    void display(){
        cout<<"Model: "<<model<<",Year: "<<year <<endl;
    }
};
int main(){
    Car c1;
    Car c2("Toyota");
    Car c3("Honda",2020);

    c1.display();
    c2.display();
    c3.display();
    return 0;
=======
#include<iostream>
using namespace std;

class Car{
    string model;
    int year;

public:
    Car(){
        model="Unknown";
        year=0;
    }
    Car(string m){
        model=m;
        year=0;
    }
    Car(string m, int y){
        model=m;
        year=y;
    }
    void display(){
        cout<<"Model: "<<model<<",Year: "<<year <<endl;
    }
};
int main(){
    Car c1;
    Car c2("Toyota");
    Car c3("Honda",2020);

    c1.display();
    c2.display();
    c3.display();
    return 0;
>>>>>>> 747b10cc55a8640feb5e24fc3ba356c449b54e36
}