#include <iostream>
using namespace std;

int main()
{
    int rollNo[5];
    int searchRoll;
    bool found = false;

    // Enter roll numbers
    cout << "Enter roll numbers of 5 students:" << endl;

    for (int i = 0; i < 5; i++) {
        cin >> rollNo[i];
    }

    // Enter roll number to search
    cout << "Enter roll number to search: ";
    cin >> searchRoll;

    // Search for the roll number
    for (int i = 0; i < 5; i++) {
        if (rollNo[i] == searchRoll) {
            found = true;
            break;
        }
    }

    // Display result
    if (found) {
        cout << "Student found";
    } else {
        cout << "No roll no. absent";
    }

    return 0;
}
