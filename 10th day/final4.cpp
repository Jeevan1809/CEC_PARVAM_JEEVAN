#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <sstream>
#include <algorithm>
using namespace std;

struct Student {
    string name, email, password, phone;
    int age, registerId;
};

struct Course {
    int id;
    string name;
};

const int MAX_STUDENTS = 30;

int generateRegisterId() {
    ifstream in("students.txt");
    int count = 0;
    string line;
    while (getline(in, line)) count++;
    return count + 1;
}

int countStudents() {
    ifstream in("students.txt");
    int count = 0;
    string line;
    while (getline(in, line)) count++;
    return count;
}

bool emailExists(const string &email) {
    ifstream in("students.txt");
    string line;
    while (getline(in, line)) {
        stringstream ss(line);
        string name, fileEmail;
        getline(ss, name, ',');
        getline(ss, fileEmail, ',');
        if (fileEmail == email) return true;
    }
    return false;
}

void registerStudent() {
    if (countStudents() >= MAX_STUDENTS) {
        cout << "Maximum registrations reached.\n";
        return;
    }

    Student s;
    cout << "\n=== Register Student ===\n";
    cin.ignore();
    cout << "Name: ";
    getline(cin, s.name);
    cout << "Email: ";
    getline(cin, s.email);
    if (emailExists(s.email)) {
        cout << "Email already exists.\n";
        return;
    }
    cout << "Password: ";
    getline(cin, s.password);
    cout << "Phone: ";
    getline(cin, s.phone);
    cout << "Age: ";
    cin >> s.age;
    s.registerId = generateRegisterId();

    ofstream out("students.txt", ios::app);
    out << s.name << "," << s.email << "," << s.password << "," << s.phone << "," << s.age << "," << s.registerId << "\n";
    out.close();
    cout << "Registered successfully. Your Register ID is: " << s.registerId << "\n";
}

vector<Student> loadStudents() {
    vector<Student> students;
    ifstream in("students.txt");
    string line;
    while (getline(in, line)) {
        stringstream ss(line);
        Student s;
        getline(ss, s.name, ',');
        getline(ss, s.email, ',');
        getline(ss, s.password, ',');
        getline(ss, s.phone, ',');
        ss >> s.age;
        ss.ignore();
        ss >> s.registerId;
        students.push_back(s);
    }
    return students;
}

bool loginStudent(string &loggedEmail) {
    string email, password;
    cout << "\n=== Student Login ===\n";
    cout << "Email: ";
    cin >> email;
    cout << "Password: ";
    cin >> password;

    ifstream in("students.txt");
    string line;
    while (getline(in, line)) {
        stringstream ss(line);
        Student s;
        getline(ss, s.name, ',');
        getline(ss, s.email, ',');
        getline(ss, s.password, ',');
        getline(ss, s.phone, ',');
        ss >> s.age;
        ss.ignore();
        ss >> s.registerId;

        if (s.email == email && s.password == password) {
            loggedEmail = s.email;
            cout << "Welcome " << s.name << " (Register ID: " << s.registerId << ")\n";
            return true;
        }
    }

    cout << "Invalid login.\n";
    return false;
}

void listCourses() {
    cout << "\n=== Courses ===\n";
    ifstream in("courses.txt");
    string line;
    while (getline(in, line)) {
        cout << line << "\n";
    }
    in.close();
}

void applyForCourse(const string &email) {
    int courseId;
    listCourses();
    cout << "Enter Course ID: ";
    cin >> courseId;

    ifstream in("applications.txt");
    string line;
    while (getline(in, line)) {
        stringstream ss(line);
        string fileEmail;
        int fileCourseId;
        getline(ss, fileEmail, ',');
        ss >> fileCourseId;
        if (fileEmail == email && fileCourseId == courseId) {
            cout << "Already applied.\n";
            return;
        }
    }
    in.close();

    ofstream out("applications.txt", ios::app);
    out << email << "," << courseId << "\n";
    out.close();
    cout << "Application submitted.\n";
}

void viewStatus(const string &email) {
    cout << "\n=== Application Status ===\n";
    ifstream in("applications.txt");
    ifstream courses("courses.txt");
    vector<Course> courseList;
    string line;

    while (getline(courses, line)) {
        stringstream ss(line);
        Course c;
        char comma;
        ss >> c.id >> comma;
        getline(ss, c.name);
        courseList.push_back(c);
    }

    bool found = false;
    while (getline(in, line)) {
        stringstream ss(line);
        string fileEmail;
        int courseId;
        getline(ss, fileEmail, ',');
        ss >> courseId;
        if (fileEmail == email) {
            found = true;
            cout << "Applied to: " << courseId;
            for (auto &c : courseList) {
                if (c.id == courseId) {
                    cout << " - " << c.name;
                    break;
                }
            }
            cout << " [Pending]\n";
        }
    }

    if (!found) cout << "No applications found.\n";
    in.close();
    courses.close();
}

void listAllStudents() {
    vector<Student> students = loadStudents();
    cout << "\n=== All Students ===\n";
    for (auto &s : students) {
        cout << "Name: " << s.name << ", Email: " << s.email
             << ", Phone: " << s.phone << ", Age: " << s.age
             << ", RegID: " << s.registerId << "\n";
    }
}

void sortStudentsByField() {
    vector<Student> students = loadStudents();
    int choice;
    cout << "Sort by:\n1. Name\n2. Email\n3. Phone\nChoose: ";
    cin >> choice;

    switch (choice) {
        case 1: sort(students.begin(), students.end(), [](Student a, Student b){ return a.name < b.name; }); break;
        case 2: sort(students.begin(), students.end(), [](Student a, Student b){ return a.email < b.email; }); break;
        case 3: sort(students.begin(), students.end(), [](Student a, Student b){ return a.phone < b.phone; }); break;
        default: cout << "Invalid choice.\n"; return;
    }

    for (auto &s : students) {
        cout << "Name: " << s.name << ", Email: " << s.email
             << ", Phone: " << s.phone << ", Age: " << s.age
             << ", RegID: " << s.registerId << "\n";
    }
}

void searchStudent() {
    vector<Student> students = loadStudents();
    int choice, num;
    string query;
    bool found = false;

    cout << "\nSearch by:\n1. Email\n2. Name\n3. Phone\n4. Register ID\n5. Age\nChoose: ";
    cin >> choice;
    cin.ignore();

    cout << "\nEnter value to search: ";
    if (choice == 4 || choice == 5) {
        cin >> num;
    } else {
        getline(cin, query);
    }

    cout << "\n-- Search Results --\n";
    for (auto &s : students) {
        bool match = false;
        switch (choice) {
            case 1: match = (s.email == query); break;
            case 2: match = (s.name == query); break;
            case 3: match = (s.phone == query); break;
            case 4: match = (s.registerId == num); break;
            case 5: match = (s.age == num); break;
            default: cout << "Invalid option.\n"; return;
        }

        if (match) {
            found = true;
            cout << "Name: " << s.name << "\nEmail: " << s.email
                 << "\nPhone: " << s.phone << "\nAge: " << s.age
                 << "\nRegister ID: " << s.registerId << "\n\n";
        }
    }

    if (!found) {
        cout << "No matching student found.\n";
    }
}

void studentDashboard(const string &email) {
    int choice;
    do {
        cout << "\nStudent Dashboard:\n1. View Courses\n2. Apply\n3. Status\n4. Logout\nChoose: ";
        cin >> choice;
        switch (choice) {
            case 1: listCourses(); break;
            case 2: applyForCourse(email); break;
            case 3: viewStatus(email); break;
        }
    } while (choice != 4);
}

void adminMenu() {
    int choice;
    do {
        cout << "\nAdmin Tools:\n1. View All\n2. Sort\n3. Search\n4. Back\nChoose: ";
        cin >> choice;
        switch (choice) {
            case 1: listAllStudents(); break;
            case 2: sortStudentsByField(); break;
            case 3: searchStudent(); break;
        }
    } while (choice != 4);
}

void initializeCourses() {
    ofstream out("courses.txt");
    out << "1,Computer Science\n";
    out << "2,Mechanical Engineering\n";
    out << "3,Electrical Engineering\n";
    out << "4,B.Sc Mathematics\n";
    out << "5,B.A English\n";
    out.close();
}

void mainMenu() {
    int choice;
    string email;
    while (true) {
        cout << "\n=== ePravesh Portal ===\n1. Register\n2. Login\n3. Admin Tools\n4. Exit\nChoose: ";
        cin >> choice;
        switch (choice) {
            case 1: registerStudent(); break;
            case 2: if (loginStudent(email)) studentDashboard(email); break;
            case 3: adminMenu(); break;
            case 4: cout << "Goodbye!\n"; return;
            default: cout << "Invalid option.\n";
        }
    }
}

int main() {
    initializeCourses();
    mainMenu();
    return 0;
}
