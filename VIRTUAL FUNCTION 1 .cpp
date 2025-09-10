#include<iostream>
using namespace std;
class base {
      public:
      virtual void show()
      {
        cout<<"BASE CLASS "<<endl;
        }
class deriverd : public base {
  public:
  void show()
  {
    cout<<"DERIVED class ";
    }
 int main()
 {
  base b1;
  derived d1;
  b1.show();
  return 0;
  }
