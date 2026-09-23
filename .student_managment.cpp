#include <iostream>
using namespace std;

struct Student
{
    int rollNo;
    float marks;
};

int main()
{
    Student students[100];
    int count = 0;
    int choice;

    do
    {
        cout << "\n===== STUDENT MANAGEMENT SYSTEM =====" << endl;
        cout << "1. Add Student" << endl;
        cout << "2. Display All Students" << endl;
        cout << "3. Search Student by Roll No" << endl;
        cout << "4. Exit" << endl;

        cout << "Enter your choice: ";
        cin >> choice;

        switch(choice)
        {
            case 1:
                if(count < 100)
                {
                    cout << "Enter Roll No: ";
                    cin >> students[count].rollNo;

                    cout << "Enter Marks: ";
                    cin >> students[count].marks;

                    count++;

                    cout << "Student record added successfully!" << endl;
                }
                else
                {
                    cout << "Student limit reached!" << endl;
                }
                break;

            case 2:
                if(count == 0)
                {
                    cout << "No student records found." << endl;
                }
                else
                {
                    cout << "\nRoll No\tMarks" << endl;
                    cout << "----------------" << endl;

                    for(int i = 0; i < count; i++)
                    {
                        cout << students[i].rollNo << "\t"
                             << students[i].marks << endl;
                    }
                }
                break;

            case 3:
            {
                int roll;
                bool found = false;

                cout << "Enter Roll No to search: ";
                cin >> roll;

                for(int i = 0; i < count; i++)
                {
                    if(students[i].rollNo == roll)
                    {
                        cout << "Student Found!" << endl;
                        cout << "Roll No: "
                             << students[i].rollNo << endl;
                        cout << "Marks: "
                             << students[i].marks << endl;

                        found = true;
                        break;
                    }
                }

                if(found == false)
                {
                    cout << "Student record not found." << endl;
                }

                break;
            }

            case 4:
                cout << "Exiting program..." << endl;
                break;

            default:
                cout << "Invalid choice!" << endl;
        }

    } while(choice != 4);

    return 0;
}

