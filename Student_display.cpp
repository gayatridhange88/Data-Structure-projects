#include <iostream>
#include<string>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number od student:";
    cin>>n;
    int rollNo[n];
    cout<<"Enter the the rollNo:\n";
    for (int i = 0; i < n; i++) {
        cin >> rollNo[i];
    }

    cout << "\nStored roll numbers are:\n";
    for (int i = 0; i < n; i++) {
        cout << rollNo[i] << " ";
    }

    return 0;
}
    
    

