/*Write a program
create a class Student_Management_System
stores student information(Name,Registration Number, Mobile Number) of 10 students 
display records using Array of Objects
*/
#include <iostream>
#include <string>
using namespace std;

// Define the Student class
class Student {
public:
    string name;
    string regNo;
    string mobile;

    // Constructor to initialize student details
    Student(string n, string r, string m) {
        name = n;
        regNo = r;
        mobile = m;
    }

    // Method to display student information
    void display() {
        cout << "Name: " << name << endl;
        cout << "Registration Number: " << regNo << endl;
        cout << "Mobile Number: " << mobile << endl;
        cout << "------------------------------" << endl;
    }
};

// Define the Student_Management_System class
class Student_Management_System {
public:
    Student* students[10];  // Array of pointers to store student objects

    // Method to add a student to the array
    void addStudent(int index, string name, string regNo, string mobile) {
        if (index < 10) {
            students[index] = new Student(name, regNo, mobile);  // Create new student object and store it
        } else {
            cout << "Cannot add more students. Maximum limit reached." << endl;
        }
    }

    // Method to display all student records
    void displayAllStudents() {
        for (int i = 0; i < 10; i++) {
            if (students[i] != nullptr) {
                students[i]->display();  // Call display function for each student
            }
        }
    }
};

int main() {
    Student_Management_System sms;

    // Adding students to the system
    sms.addStudent(0, "John Doe", "R001", "1234567890");
    sms.addStudent(1, "Alice Smith", "R002", "0987654321");
    sms.addStudent(2, "Bob Johnson", "R003", "1122334455");
    sms.addStudent(3, "Emily Davis", "R004", "6677889900");
    sms.addStudent(4, "Michael Brown", "R005", "2233445566");
    sms.addStudent(5, "Sarah Wilson", "R006", "5544332211");
    sms.addStudent(6, "David Lee", "R007", "9988776655");
    sms.addStudent(7, "Jessica Taylor", "R008", "3344556677");
    sms.addStudent(8, "Daniel Moore", "R009", "7766554433");
    sms.addStudent(9, "Olivia Harris", "R010", "4433221100");

    // Display all student records
    sms.displayAllStudents();

    // Clean up dynamic memory
    for (int i = 0; i < 10; i++) {
        delete sms.students[i];  // Free dynamically allocated memory
    }

    return 0;
}
