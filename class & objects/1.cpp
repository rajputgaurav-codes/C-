// create a class car with brand and price.
#include<iostream>
using namespace std;
class car{
    public:
           string brand;
           int price;
};

int main()
{
    car c1;
    c1.brand = "TATA";
    c1.price = 10000000;

    cout<<"Car Brand : "<<c1.brand<<endl;
    cout<<"Car Price : "<<c1.price;
    return 0;

}