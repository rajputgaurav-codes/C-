// create a class employee with one private variable and display it using public function.
#include<iostream>
using namespace std;
class employee
{
    private:
        int id;
        string name;
    public:
        void display()
        {
            id=101;
            name="rahul";
            cout<<"employee id : "<<id;
            cout<<"\nemployee name : "<<name;
        }
};
int main()
{
    employee e1;
    e1.display();
    return 0;
}