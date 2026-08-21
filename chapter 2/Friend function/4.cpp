// add two number stored in two different objects using friend function.
#include<iostream>
using namespace std;
class Number
{
    private:
       int num;
    public:
      void getdata(){
        cout<<"Enter a number : ";
        cin>>num;
      }
      friend void add(Number,Number);
    
};

void add(Number n1, Number n2){
    cout<<"Add numbers : "<<n1.num + n2.num;
}

int main(){
    Number obj1,obj2;
    obj1.getdata();
    obj2.getdata();
    add(obj1,obj2);
    return 0;
}