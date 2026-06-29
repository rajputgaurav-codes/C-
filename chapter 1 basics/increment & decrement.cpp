#include<iostream>
using namespace std;
int main(){
   // learning post increment 
   int x = 4;
   cout<<x++<<endl;           //value x ke 4 se 5 ho gyai hai par ye abhi bhi 4 hi dikhaye ya jab tak ham ise dobara na print kare.
   cout<<x<<endl;             //ab value 5 print hogi.

   //learning post decrement
   cout<<x--<<endl;          //value ab 5 se 4 ho gai hai par jab tak dobara value x ke print jab tak nahi karenge tab tak vo 5 hi rahega.
   cout<<x<<endl;            //ab value 4 print hoga.
   
   //learning pre increment
   cout<<++x<<endl;          // is may value 4 se 5 ho gya hai or 5 hi print hoga dubara print karne par bhi 5 hi print hoga.

   //learning pre decrement
   cout<<--x<<endl;         // is may value 5 se 4 ho gya hai or 4 hi print hoga dubara print karne par bhi 4 hi print hoga.
   


}
