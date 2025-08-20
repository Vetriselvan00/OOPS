#include<iostream>
using namespace std;
class car {
string company;
int model;
public:
void getdata();
void display();
};
void car :: getdata()
{
  cout<<"ENTER YOUR CAR COMPANY = ";
  cin>>company;
  cout<<" ENTER YOUR CAR MODEL = " ;
  cin >> model;
  }
 void car :: display()
 {
   cout << " your car company = " << company << endl;
   cout << " your car model = " << model << endl;
   }
  int main()
  {
   car c1,c2,c3;
   for (int i = 0; i<3;i++)
   {
      c1.getdata();
      c1.display();
      }
  }
