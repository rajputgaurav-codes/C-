// write s program to display a private variable using a friend function.

#include<iostream>
using namespace std;
class mark
{
    int m=50;
    friend void display(mark);
};

void display(mark m1){
    cout<<"Marks is : "<<m1.m<<endl;
}
int main(){
    mark m1;
    display(m1);
    return 0;
}