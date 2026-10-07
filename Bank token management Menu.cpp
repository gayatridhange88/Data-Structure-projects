#include <iostream>
using namespace std;

int main()
{
    int queue[100];
    int front = 0;
    int rear = 0;
    int choice;
    int token;

    do
    {
        cout << "\n--- Bank Token Management System ---\n";
        cout << "1. Issue Token\n";
        cout << "2. Display All Tokens\n";
        cout << "3. Serve Customer\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
            case 1:
                cout << "Enter token number: ";
                cin >> token;

                queue[rear] = token;
                rear++;

                cout << "Token issued successfully.\n";
                break;

            case 2:
                if (front == rear)
                {
                    cout << "No tokens available.\n";
                }
                else
                {
                    cout << "All tokens:\n";

                    for (int i = front; i < rear; i++)
                    {
                        cout << queue[i] << " ";
                    }

                    cout << endl;
                }
                break;

            case 3:
                if (front == rear)
                {
                    cout << "No customer to serve.\n";
                }
                else
                {
                    cout << "Serving customer with token number: "
                         << queue[front] << endl;

                    front++;
                }
                break;

            case 4:
                cout << "Exiting program...\n";
                break;

            default:
                cout << "Invalid choice. Please try again.\n";
        }

    } while (choice != 4);

    return 0;
}
