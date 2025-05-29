#include<iostream>
using namespace std;

class person
{
    public:
  
    void introduce()
    {
        cout <<  "i am devil."  << endl;
    }
};


class  student: public person
{
    public:
    void  study()
    {
         cout << " studing...."<< endl;
    }
};

class  Employe: public person
{
    public:
    void  work()
    {
         cout << " working...."<< endl;
    }
};



class workingstudent :public student, public Employe
{
    public:
    void manage()
    {
        cout << "managing both work and studies." << endl;
    }
};

int main()
{
   workingstudent ws;
   ws.student::introduce();
   ws.Employe::introduce();
   ws.study();
   ws.work();
   ws.manage();
   return 0;
}