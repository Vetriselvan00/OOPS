#include <iostream>
#include <cstdlib>
#include<cstring>
using namespace std;
class book
{
    string title;
    string author;
    string publisher;
    
    public:
        float price;
        int stock_pos;
        book(void);
        bool getbook(const string tit ,const string aut);
        
};
book :: book(void)
{
    cout<<"enter the title ";
    getline(cin,title);
    cout<<"\nenter the author ";
    getline(cin,author);
    cout<<"\nenter the price ";
    cin>>price;
    cout<<"\nenter the position of the stock :";
    cin>>stock_pos;
    cin.ignore();
    cout<<"\nenter the publisher name:";
    getline(cin,publisher);
}
bool book :: getbook(const string tit,const string aut)
{
    
    return (title == tit && author == aut);
}
int main() {
    book b[5];
    int copies=0,index=0;
    bool flag = false;
    string choice;
    string tit,aut;
    do{
    cout<<"enter the title and author name";
    getline(cin,tit);
    getline(cin,aut);
        for ( int i = 0 ;  i < 5 ; i ++)
        {
            if(b[i].getbook(tit,aut))
            {
                index=i;
                    cout<<"\nthe book "<<tit<<" is available please enter how many copies do you want ";
                    cin>>copies;
                    flag = true;
                    break;}
            
        }
        if(flag==false){
            cout<<"\nthe book is not available:";
            exit(1);
        }
            
        if ( flag == true)
        {
                if (copies== b[index].stock_pos)
                    cout<<" \nprice of the books = "<<copies*(b[index].price);
                else
                    cout<<"required copies are not available";
        }
        
        cout<<"\n\ndo you want to buy again type y otherwise n";
        cin>>choice;
        
    }while(choice =="Y"||choice == "y");

}
