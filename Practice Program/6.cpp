//Take positive input and tells if it is divisible by 5 or not.
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter a number n:";
    cin>>n;
    if(n%5==0){
        cout<<"yes,it is divisible by 5";
    }
    else{
         cout<<"No,it is divisible by 5";
    }
    return 0;

}