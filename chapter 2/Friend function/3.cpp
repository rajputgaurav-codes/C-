// write a program to access a private member using a friend class.
#include<iostream>
using namespace std;
class A
{
    private:
     int x;
    public:
      A(){
        x = 500;
      }
      friend class B;
};

class B
{
    public:
      void display(A obj){
        cout<<"The value of x is : "<<obj.x;
      }
};
int main(){
    A a1;
    B b1;
    b1.display(a1);
    return 0;
}