#include<iostream>
using namespace std;
template<class t>
class swap{
t a;
t b;
public:
swap(t x , t y)
{
  a = x;
  b = y;
 }
 void s()
 {
 t temp = a;
 a = b;
 b = temp;
 }
 void show()
 {
   cout<<"Swap :"<< a <<" "<< b<<endl;
   }   
 };
 
int main()
{
swap<int> s1(20,60);
s1.s();
s1.show();
return 0;
}
