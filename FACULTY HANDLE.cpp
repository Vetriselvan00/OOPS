#include<iostream>
using namespace std;
class faculty
{
  public:
  int course_id;
  string course_name;
  string staff_name;
  int staff_id;
  string department;
  string position;
  int phone_no;

faculty(int id,string c_name,int s_id,string name,string dep,string pos,int ph)
  {
       course_id = id;
       course_name = c_name;
       staff_id= s_id;
       staff_name = name;
       department = dep;
       position = pos;
       phone_no = ph;
  }
  void display()
  {
       cout<<"\nStaff_id =  "<<staff_id  <<"\nStaff Name =  "<<staff_name<<"\nDepatment = "<<department<<"\nPosition =  "<<position<<"\nPhone number = "<<phone_no<<endl;
       cout<<"Course name = "<<course_name<<"\nCourse id = "<<course_id<<endl;
  }
  void course_display()
  {
      cout<<"course id = "<<course_id<< "\ncourse name = "<< course_name<<"\nDepartment = "<<department<<endl;
      }
};
int main()
{
int choice;
int s;
     int ss;
int course_id;
  string course_name;
  string staff_name;
  int staff_id;
  string department;
  string position;
  int phone_no;
     int n;
     cout<<"Enter the number of staffs = ";
     cin>>n;
     faculty *object[n];
     for (int i = 0; i<n;i++)
     {
          cout<<"Staff id "<<i+1<<" = ";
          cin>>staff_id;
          cout<<"Staff name = ";
          cin>>staff_name;
          cout<<"Course id = ";
          cin>>course_id;
          cout<<"Course name = ";
          cin>>course_name;
          cout<<"Department =";
          cin>> department;
          cout<<"Position =";
          cin>>position;
          cout<<"Phone number = ";
          cin>>phone_no;

          object[i] = new faculty(course_id,course_name, staff_id,staff_name,department, position,phone_no);
     }
     
       while(choice!=3)
       {
        cout<<"\nMENU "<<endl;
       cout<<"\n1.Faculty information ";
       cout<<"\n2.Course handled by faculty";
       cout<<"\n3.Exit";
       cout<<"ENTER THE CHOICE : "<<endl;
       cin>>choice;
       switch(choice)
       {
       case 1:
       {
       bool found = false;
     cout<<"\nENTER THE STAFF ID = ";
     cin >> ss;
     for(int j = 0; j<n; j++)
     {
          if(object[j]->staff_id==ss)
               {
                     object[j]->display();
                     found = true;
                    break;
                }
     }
     if (!found) {
                cout << "No faculty found with Staff ID: " << ss << endl;
            }
     break;
     }
     case 2:
     {
     bool f = false;
     cout<<"\nENTER THE STAFF_ID TO SEE COURSE INFORMATION : ";
     cin>>s;
     for (int k = 0; k<n; k++)
     {
        if(object[k] -> staff_id == s)
        {
          object[k] -> course_display();
          f = true;
          break;
          }
          }
          if (!f) {
                cout << "No faculty found with Staff ID: " << s << endl;
            }
     break;
     }
}
}
}
