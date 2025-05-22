#include<iostream>
using namespace std;

class Book
{
    public:
     string title;
     string author;

     void display()
     {
        cout<<"Title:"<<title<<",Author:"<<author<<endl;
     }
};

int main()
{
    Book b1;
    b1.author = "Jeevan";
    b1.title = "virat kohli";
    b1.display();
    return 0;
}