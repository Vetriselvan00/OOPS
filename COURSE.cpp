#include<iostream>
#include<string>
using namespace std;
class course 
{
  string course_code;
  string course_title;
  string category;
  int LTPC[4];
  int credits;
  
 public:
   void getdata();
   void print();
  };
  
  void course :: getdata()
{   
   cout << "ENTER YOUR COURSE CODE : ";
   cin >> course_code;
   cout << "ENTER COURSE NAME : ";
   cin >> course_title;
   cout << " ENTER CATEGORY : ";
   cin >> category;
    cout << "ENTER L, T, P, C : ";
    for (int i = 0; i < 4; i++)
    {
        cin >> LTPC[i];
    }
   cout << "ENTER CREDITS :";
   cin >> credits;
   }

 void course :: print()
 {
    cout << " course code : " << course_code  << endl ;
    cout << "course title : " << course_title << endl ;
    cout << " category : " << category << endl;
    for (int i = 0; i < 4; i++)
    {
        cout <<" L,P,T,C "<< LTPC[i] << endl ;
        }
    cout << " Credits : " <<  credits << endl;
    }  
 
 void course :: contact_periods()
 {
 
 
 int main()
 {
   course c;
   c.getdata();
   c.print();
   return 0;
   }
