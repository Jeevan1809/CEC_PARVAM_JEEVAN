#include<iostream>
#include<fstream>
#include<string>
#include<limits>

void logError(const string &message)
{
    ofstream errorFile("error_log.txt",ios::app);
    if(errorFile)
    {
        errorFile << message << endl;
        errorFil.close();
    }
    else
    {
        cerr << "Failed to open error_log.txt"
    }
};

int main()
{
    double num1,num2, result;
    char choice;

    do
    {
        try
        {
            cout <<"\nEnter the first number: ";
            if(!(cin >> num1))

        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << '\n';
        }
        
    } while (condition);

}