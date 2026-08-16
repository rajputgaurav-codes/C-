// create a class product with: productid,profuctname price and define them outside using :: operatot
//this program using a scope resolution.
#include<iostream>
using namespace std;
class product
{
    public:
       int id;
       string name;
       int price;
       void input();
       void display();
};
void product::input()
{
    cout<<"enter product id : ";
    cin>>id;
    cout<<"enter product name : ";
    cin>>name;
    cout<<"enter product price : ";
    cin>>price;
}
void product::display(){
    cout<<"\n\nprofuct id:  "<<id;
    cout<<"\nprofuct name:  "<<name;
    cout<<"\nprofuct price:  "<<price;

}
int main()
{
    product p1;
    p1.input();
    p1.display();
    return 0;
}