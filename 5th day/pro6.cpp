#include<iostream>
using namespace std;

class shape
{
    public:
  
    void setcolor(string c)
    {
        cout <<  "setting color."  << endl;
    }
};


class  circle: public shape
{
    public:
    void drawcircle()
    {
         cout << " drawing circle."<< endl;
    }
};

class Rectangle :public shape
{
    public:
    void drawRectangle()
    {
        cout << "Drawing Rectangle." << endl;
    }
};

int main()
{
    circle c;
    c.drawcircle();
    c.setcolor("red");
    Rectangle r;
    r.drawRectangle();
    r.setcolor("blue");
    return 0;
}
