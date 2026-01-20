/*If cost price and selling price of an item is input through the keyword, 
write a program to determine whether the seller has made profit or incurred loss or no profit no loss. 
also determine how much profit he made or loss he incurred.*/
#include<iostream>
using namespace std;
int main(){
    int sp,cp;
    cout<<"enter the selling price:";
    cin>>sp;
   cout<<"enter the cost price:";
    cin>>cp;
    if(sp>cp){
        cout<<"profit";
    }
    else if(sp<cp){
        cout<<"loss";
    }
    else if(sp==cp){
        cout<<"no profit, no loss";
    }
    return 0;
}