#include <iostream>
#include <string>
#include <limits>
using namespace std;

struct Student
{
    int rollNo;
    string name;
    int age;
    string course;
    Student* next;
    Student* hashNext;
};

Student* head = NULL;
const int SIZE = 10;
Student* hashTable[SIZE] = {NULL};

int hashFunction(int rollNo)
{
    return rollNo % SIZE;
}

// Register Student
void registerStudent()
{
    Student* s = new Student;

    cout << "Enter Roll Number: ";
    cin >> s->rollNo;

    int index = hashFunction(s->rollNo);

    Student* temp = hashTable[index];

    while (temp != NULL)
    {
        if (temp->rollNo == s->rollNo)
        {
            cout << "Roll Number already exists!\n";
            delete s;
            return;
        }
        temp = temp->hashNext;
    }

    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    cout << "Enter Student Name: ";
    getline(cin, s->name);

    cout << "Enter Age: ";
    cin >> s->age;

    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    s->course = "";

    // Insert into Linked List
    s->next = head;
    head = s;

    // Insert into Hash Table
    s->hashNext = hashTable[index];
    hashTable[index] = s;

    cout << "Student registered successfully!\n";
}

// Update Student
void updateStudent()
{
    int rollNo;

    cout << "Enter Roll Number to update: ";
    cin >> rollNo;

    int index = hashFunction(rollNo);

    Student* temp = hashTable[index];

    while (temp != NULL)
    {
        if (temp->rollNo == rollNo)
        {
            cin.ignore(numeric_limits<streamsize>::max(), '\n');

            cout << "Enter New Student Name: ";
            getline(cin, temp->name);

            cout << "Enter New Age: ";
            cin >> temp->age;

            cout << "Student information updated successfully!\n";
            return;
        }

        temp = temp->hashNext;
    }

    cout << "Student not found!\n";
}

// Enroll Student in Course
void enrollCourse()
{
    int rollNo;

    cout << "Enter Roll Number: ";
    cin >> rollNo;

    int index = hashFunction(rollNo);

    Student* temp = hashTable[index];

    while (temp != NULL)
    {
        if (temp->rollNo == rollNo)
        {
            cin.ignore(numeric_limits<streamsize>::max(), '\n');

            cout << "Enter Course Name: ";
            getline(cin, temp->course);

            cout << "Student enrolled successfully!\n";
            return;
        }

        temp = temp->hashNext;
    }

    cout << "Student not found!\n";
}

// Withdraw Student from Course
void withdrawCourse()
{
    int rollNo;

    cout << "Enter Roll Number: ";
    cin >> rollNo;

    int index = hashFunction(rollNo);

    Student* temp = hashTable[index];

    while (temp != NULL)
    {
        if (temp->rollNo == rollNo)
        {
            if (temp->course == "")
            {
                cout << "Student is not enrolled in any course!\n";
                return;
            }

            temp->course = "";

            cout << "Student withdrawn from course successfully!\n";
            return;
        }

        temp = temp->hashNext;
    }

    cout << "Student not found!\n";
}

// Search Student
void searchStudent()
{
    int rollNo;

    cout << "Enter Roll Number to search: ";
    cin >> rollNo;

    int index = hashFunction(rollNo);

    Student* temp = hashTable[index];

    while (temp != NULL)
    {
        if (temp->rollNo == rollNo)
        {
            cout << "\nStudent Found!\n";
            cout << "Roll Number: " << temp->rollNo << endl;
            cout << "Name: " << temp->name << endl;
            cout << "Age: " << temp->age << endl;
            cout << "Course: ";

            if (temp->course == "")
                cout << "Not Enrolled" << endl;
            else
                cout << temp->course << endl;

            return;
        }

        temp = temp->hashNext;
    }

    cout << "Student not found!\n";
}

// Display All Students
void displayStudents()
{
    Student* temp = head;

    if (temp == NULL)
    {
        cout << "No student records available!\n";
        return;
    }

    cout << "\n---- All Student Records ----\n";

    while (temp != NULL)
    {
        cout << "\nRoll Number: " << temp->rollNo << endl;
        cout << "Name: " << temp->name << endl;
        cout << "Age: " << temp->age << endl;
        cout << "Course: ";

        if (temp->course == "")
            cout << "Not Enrolled" << endl;
        else
            cout << temp->course << endl;

        temp = temp->next;
    }
}

// Main Function
int main()
{
    int choice;

    do
    {
        cout << "\n--- University Student Management System ---\n";
        cout << "1. Register Student\n";
        cout << "2. Update Student Information\n";
        cout << "3. Enroll Student in Course\n";
        cout << "4. Withdraw Student from Course\n";
        cout << "5. Search Student\n";
        cout << "6. Display All Students\n";
        cout << "7. Exit\n";

        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
            case 1:
                registerStudent();
                break;

            case 2:
                updateStudent();
                break;

            case 3:
                enrollCourse();
                break;

            case 4:
                withdrawCourse();
                break;

            case 5:
                searchStudent();
                break;

            case 6:
                displayStudents();
               

            case 7:
                cout << "Exiting program.....\n";
                break;

            default:
                cout << "Invalid choice!\n";
        }

    } while (choice != 7);

    return 0;
}

