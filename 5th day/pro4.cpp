#include<iostream>
using namespace std;

class camera
{
    public:
   
    void takephoto()
    {
        cout <<  "taking photo...."  << endl;
    }
};


class phone
{  
    public:
    void makecall()
    {
         cout << "making  a call...."<< endl;
    }
};

class smartphone:public camera,  public phone
{
    public:
    void browserinternet()
    {
        cout <<"Browsing internet...." << endl;
    }
};


int main()
{
    smartphone s1;
    s1.takephoto();
    s1.makecall();
    s1.browserinternet();
    return 0;
}