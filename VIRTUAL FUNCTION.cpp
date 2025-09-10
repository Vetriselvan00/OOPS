#include<iostream>
using std::cout;
using std::endl;
class dog {
public:
virtual void sound(){
cout<<"DOG BRAK"<<endl;
}
};
class cat: public dog {
    public:
void sound() override {
cout<<"cat meoww"<<endl;
}
};
class lion : public dog {
    public:
void sound() {
cout<<"Lion gunirrr " << endl;
}
};
int main()
{
  dog d1;
  cat c1;
  lion l1;
  d1.sound();
  l1.sound();
  dog *ptr;
  ptr = &c1;
  ptr -> sound();
}
