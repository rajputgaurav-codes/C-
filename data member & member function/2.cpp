// create an employee class with id and salary and create member function to take input and display it.
#include<iostream>
using namespace std;
class employee
{
    public:
        int id;
        int salary;

        void getdata()
        {
            cout<<"enter a employee id : ";
            cin>>id;
            cout<<"enter a employee salary : ";
            cin>>salary;
        }

        void display()
        {
            cout<<"\nEmployee id : "<<id;
            cout<<"\nEmployee salary : "<<salary;
        }
};

int main()
{
    employee e1;
    e1.getdata();
    e1.display();
    return 0;
}