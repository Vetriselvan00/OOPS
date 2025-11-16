#include<iostream>
using namespace std;
int main()
{
     int a,b,c = 0;
     cin>>a;
     cin>>b;
     try
     {
     if(b==0)
     {
          throw(b);
     }
       else
     {
          cout<<"THE DIVISION OF a and b : "<< a/b<< endl;
     }
     }

     catch(int i)
     {
          cout<<"ZERO DEVISION ERROR : "<< i;
     }
  return 0;
}

