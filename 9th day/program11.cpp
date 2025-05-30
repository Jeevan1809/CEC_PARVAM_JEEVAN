#include<iostream>
#include<iostream>
using namespace std;

struct Student
{
    string name;
    int marks;
};

void bubbleSort(Student student[],int n)
{
    for(int i=0;i<n-1;i++)
    {
        bool swapped = false;
        for(int j=0;j<n-i-1;j++)
        {
           if(student[j],student[j+1].marks)
           {
            swap(student[j],student[j+1]);
            swapped = true;
           }
        }
        if(!swapped)
        break;
    }
}

void displayStudents(Student student[],int n)
{
    cout<<"\nRanked List:\n";
    for(int i=0;i<n;i++)
    {
        cout<<i+1<<". "<<student[i].name<<" -"<<student[i].marks<<"marks\n";
    }
}

int main()
{
    int n;
    cout<<"Enter number of Students:";
    cin>>n;
    cin.ignore();

    Student*student=new Student[n];

    for(int i=0;i<n;i++)
    {
        cout<<"\nEnter name of student "<<i+1<<": ";
        getline(cin,student[i].name);
        cout<<"Enter marks: ";
        cin>>student[i].marks;
        cin.ignore();
    }

    bubbleSort(student,n);

    displayStudents(student,n);

    delete[]student;
    return 0;
}