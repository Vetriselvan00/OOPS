#include<iostream>
using namespace std;
class stu{
public:
int a;


};
class tea:public stu {
int b;
int c;
public:
void getab();
void show();
void add();
};
void tea :: getab()
{
a = 34;
b = 48;
}
void tea :: show()
{
  cout<<"a = "<< a << endl;
  cout<< " b = " << b << endl;
  cout<< " a + b  = "<< c;
  }
  
void tea:: add()
  {
  c = a + b;
  }
  int main()
  {
  tea obj;
  obj.getab();
   obj.add();
  obj.show();
 
  }
    
