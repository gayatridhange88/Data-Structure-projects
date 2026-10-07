#include <iostream>
using namespace std;

int main()
{
    int stack[5];
    int top = 0;

    cout << "Enter 5 recently served customer token numbers:\n";

    for (int i = 0; i < 5; i++)
    {
        cin >> stack[top];
        top++;
    }

    cout << "\nServed customer history:\n";

    while (top > 0)
    {
        top--;
        cout << "Token number: " << stack[top] << endl;
    }

    return 0;
}

