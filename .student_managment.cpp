#include <iostream>
using namespace std;

int main()
{
    int rollNo[100];
    float marks[100];

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
                    cin >> rollNo[count];

                    cout << "Enter Marks: ";
                    cin >> marks[count];

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
                        cout << rollNo[i] << "\t"
                             << marks[i] << endl;
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
                    if(rollNo[i] == roll)
                    {
                        cout << "Student Found!" << endl;
                        cout << "Roll No: " << rollNo[i] << endl;
                        cout << "Marks: " << marks[i] << endl;

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
