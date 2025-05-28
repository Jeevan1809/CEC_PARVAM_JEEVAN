<<<<<<< HEAD
#include<iostream>
using namespace std;

class Book
{
public:
    string title;
    string author;
    float price;

    Book(string t,string a,float p):title(t),author(a),price(p){}

    void display()
    {
        cout<<"Title: "<<title<<", Author: "<<author<<", Price: $"<<price<<endl;
    }
};

int main()
{
    Book b("bio pic","james",29.99);
    b.display();
    return 0;
=======
#include<iostream>
using namespace std;

class Book
{
public:
    string title;
    string author;
    float price;

    Book(string t,string a,float p):title(t),author(a),price(p){}

    void display()
    {
        cout<<"Title: "<<title<<", Author: "<<author<<", Price: $"<<price<<endl;
    }
};

int main()
{
    Book b("bio pic","james",29.99);
    b.display();
    return 0;
>>>>>>> 747b10cc55a8640feb5e24fc3ba356c449b54e36
}