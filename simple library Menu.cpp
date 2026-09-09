#include <iostream>
using namespace std;

int main()
{
    int book[10];
    int n=0;
    int choice;
    int searchID;

    do
        {
            cout<<"\n\n====SMART LIBRARY====";
            cout<<"\n1.Add Book";
            cout<<"\n2.Display Book";
            cout<<"\n3.Search Book";
            cout<<"\n4.Exit";
            cin>>choice;
            if(choice==1)
            {
                cout<<"Enter BookID:";
                cin>>book[n];
                n++;
                cout<<"Book Added!";
            }
            else if(choice==2)
            {
                cout<<"\nBook in library:\n";
                for(int i=0; i<n; i++)
                    {
                        cout<<book[i]<<endl;
                    }
            }
                else if(choice==3)
                {
                    cout<<"Enter Book ID to Search:";
                    cin>>searchID;
                    bool found=false;
                    for(int i=0; i<n; i++)
                        {
                            if(book[i]==searchID)
                            {
                                found=true;
                            }
                        }
                    if (found)
                    {
                        cout<<"Book found!";
                    }
                    else
                    {
                        cout<<"Book not found!";
                    }
                }
            else if(choice==4)
            {
                cout<<"thank you!";
            }
            else
            {
                cout<<"invalid choice!";
            }
        }while(choice!=4);
    return 0;
}
