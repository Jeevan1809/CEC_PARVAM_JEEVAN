#include<iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter number of students: ";
    cin >> n;

    int *rolls = new int[n];

    cout << "Enter students roll number:\n";
    for(int i = 0; i < n; i++)
    {
        cout << i+ 1 <<". ";
        cin >> rolls[i];
    }

    int key;
    cout <<"Enter the roll number to search for: ";
    cin >> key;

    bool found =false;
    for (int i=0;i<n;i++)
    {
        if(rolls[i]==key)
        {
            cout<<"roll number"<<key<<"found at position"<<i+1<<endl;
            found=true;
            break;
        }
    }

    if(!found)
    {
        cout<<"roll number"<<key<<"not found in the list. "<<endl;
    }

    delete rolls;
    return 0;
}