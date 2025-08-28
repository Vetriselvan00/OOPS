#include<iostream>
using namespace std;
class student{
char name[30];
int age;
public:
     void getdata();
     void putdata();
};
void student :: getdata()
{
     cout<<"enter name : ";
     cin >> name;
     cout << "enter age : ";
     cin >> age;
}
void student  :: putdata()
{
     cout<<"NAME : "<< name << endl ;
     cout << " age :" << age << endl;
}

int main()
{
     int size = 3;
     student s1[size];
     for(int i = 0; i<size; i++)
     {
          s1[i].getdata();
     }
     for(int j = 0; j<size; j++)
     {
          s1[j].putdata();
     }
}
