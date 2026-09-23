#include <iostream>
using namespace std;

int main() {
    int marks[5];

    // Input marks
    cout << "Enter marks of 5 students:" << endl;
    for (int i = 0; i < 5; i++) {
        cin >> marks[i];
    }

    // Arrange marks in descending order
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4 - i; j++) {
            if (marks[j] < marks[j + 1]) {
                int temp = marks[j];
                marks[j] = marks[j + 1];
                marks[j + 1] = temp;
            }
        }
    }

    // Display marks
    cout << "\nMarks in descending order: ";
    for (int i = 0; i < 5; i++) {
        cout << marks[i] << " ";
    }

    // Highest and lowest marks
    cout << "\nHighest marks: " <<#include<iostream>
using namespace std;

int main()
{
int marks[5],temp;

cout<<"Enter marks of 5 students:"<<endl;
for(int i = 0; i < 5; i++)
{
cin>>marks[i];
}
for (int i = 0; i < 5; i++)
{
for(int j = i + 1; j < 5; j++)
{
if(marks[i] > marks[j])
{
temp = marks[i];

marks[i] = marks[j];
marks[j] = temp;
}
}
}
cout<<"Marks in descending order:";
for(int i = 0; i < 5 ; i++)
{
cout<<marks[i]<<" ";
}
cout<<"\n lowest marks="<<marks[0]<<endl;
cout<<"Highest marks="<<marks[4]<<endl;
return 0;
} marks[0];
    cout << "\nLowest marks: " << marks[4];

    return 0;
}
#include <iostream>
using namespace std;

int main() {
    int marks[5];

    // Input marks
    cout << "Enter marks of 5 students:" << endl;
    for (int i = 0; i < 5; i++) {
        cin >> marks[i];
    }

    // Arrange marks in descending order
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4 - i; j++) {
            if (marks[j] < marks[j + 1]) {
                int temp = marks[j]#include<iostream>
using namespace std;

int main()
{
int marks[5],temp;

cout<<"Enter marks of 5 students:"<<endl;
for(int i = 0; i < 5; i++)
{
cin>>marks[i];
}
for (int i = 0; i < 5; i++)
{
for(int j = i + 1; j < 5; j++)
{
if(marks[i] > marks[j])
{
temp = marks[i];

marks[i] = marks[j];
marks[j] = temp;
}
}
}
cout<<"Marks in descending order:";
for(int i = 0; i < 5 ; i++)
{
cout<<marks[i]<<" ";
}
cout<<"\n lowest marks="<<marks[0]<<endl;
cout<<"Highest marks="<<marks[4]<<endl;
return 0;
};
                marks[j] = marks[j + 1];
                marks[j + 1] = temp;
            }
        }
    }

    // Display marks
    cout << "\nMarks in descending order: ";
    for (int i = 0; i < 5; i++) {
        cout << marks[i] << " ";
    }

    // Highest and lowest marks
    cout << "\nHighest marks: " << marks[0];
    cout << "\nLowest marks: " << marks[4];

    return 0;
}
#include <iostream>
using namespace std;

int main() {
    int marks[5];

    // Input marks
    cout << "Enter marks of 5 students:" << endl;
    for (int i = 0; i < 5; i++) {
        cin >> marks[i];
    }

    // Arrange marks in descending order
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4 - i; j++) {
            if (marks[j] < marks[j + 1]) {
                int temp = marks[j];
                marks[j] = marks[j + 1];
                marks[j + 1] = temp;
            }
        }
    }

    // Display marks
    cout << "\nMarks in descending order: ";
    for (int i = 0; i < 5; i++) {
        cout << marks[i] << " ";
    }

    // Highest and lowest marks
    cout << "\nHighest marks: " << marks[0];
    cout << "\nLowest marks: " << marks[4];

    return 0;
}
