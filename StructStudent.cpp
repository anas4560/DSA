#include <iostream>
#include <string>
using namespace std;
struct Student {
    string name;
    int roll;
    float marks;
};
int main() {
    Student s; 
    cout << "Enter Student Name: ";
    getline(cin, s.name);  
    cout << "Enter Roll Number: ";
    cin >> s.roll;
    cout << "Enter Marks: ";
    cin >> s.marks;
    cout << "\nStudent Details:\n";
    cout << "Name: " << s.name << endl;
    cout << "Roll Number: " << s.roll << endl;
    cout << "Marks: " << s.marks << endl;
    return 0;
}


