#include<iostream>
using namespace std;
void fun3()
{
    printf("Inside the fun 3 \n");
    try
    {
        int x,y,z = 0;
        x = 30; y = 90; z = 0;
        
        if( z != 0)
        {
            int res = x / z;
            printf(" result = %d \n" , res);
            throw 20.0;
        }
        else {
           throw 01;
        }
    }
    catch( float c )
    {
        printf("hello\n");
    }
}

void fun2()
{
     printf(" Inside the fun2 \n ");
     fun3();
}
void fun1()
{
    printf("INSIDE THE FUN 1 \n " );
    fun2();
}

int main()
{
     try
     {
        printf("Inside the main \n");
        fun1();
     }

        catch (int res )
        {
               cout<<"exception occur ";
        }
        
}
