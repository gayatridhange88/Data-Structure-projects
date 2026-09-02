#include <iostream>
#include<string>

using namespace std;
int main()
{
     int id1,id2,id3;
     string title1,title2,title3;
     //B00k1
     cout<<"Enter Book id1:";
     cin>>id1;
     cin.ignore();
     cout<<"Enter Book 1 title:";
     getline( cin,title1);
     cout<<"Enter Book id2:";
     cin>>id2;
     cin.ignore();
     cout<<"Enter Book 2 title:";
     getline(cin,title2);
     cout<<"Enter Book id3:";
     cin>>id3;
     cin.ignore();
     cout<<"Enter Book 3 title:";
     getline(cin,title3);
     cout<<"\n====Book library====";
     cout<<"\n..Enter id"<<id1;
     cout<<"\n..Enter title"<<title1;
     cout<<"\n..Enter id"<<id2;
     cout<<"\n..Enter title"<<title2;
     cout<<"\n..Enter id"<<id3;
     cout<<"\n..Enter title"<<title3;
     cout<<"\n..Enter id"<<id3;
     
     return 0;
}
