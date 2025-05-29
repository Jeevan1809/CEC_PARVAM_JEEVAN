#include <iostream>
#include <fstream>
#include <string>
#include <vector>

struct Student
{
    std::string name;
    int age;
    float grade;
};

void writeStudentsToFile(const std::vector<Student> &students, const std::string &filename)
{
    std::ofstream outFile(filename);
    if (outFile.is_open())
    {
        for (const auto &student : students)
        {
            outFile << student.name << "," << student.age << "," << student.grade << "\n";
        }
        outFile.close();
        std::cout << "Student data written to file.\n";
    }
    else
    {
        std::cout << "Unable to open file for writing.\n";
    }
}

void readStudentsFromFile(const std::string &filename)
{
    std::ifstream inFile(filename);
    if (inFile.is_open())
    {
        std::string line;
        std::cout << "Reading student data from file:\n";
        while (std::getline(inFile, line))
        {
            std::cout << line << "\n";
        }
        inFile.close();
    }
    else
    {
        std::cout << "Unable to open file for reading.\n";
    }
}

int main()
{
    std::vector<Student> students = {
        {"John", 20, 85.5},
        {"Jane", 21, 90.0},
        {"Jim", 22, 78.0}
    };

    std::string filename = "students.txt";
    writeStudentsToFile(students, filename);
    readStudentsFromFile(filename);

    return 0;
}