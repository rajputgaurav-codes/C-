//Take integer input and print the absolute value of that integer.
#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"enter a value x:";
    cin>>x;
    if(x>=0){
        cout<<x;
    }
    else{
        cout<<-x;
    }
    return 0;

}