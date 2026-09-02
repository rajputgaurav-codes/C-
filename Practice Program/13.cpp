// Program to create two classes: Programmer and Tester with their id, nm and salary.Input & Display programmer and tester details.
#include<iostream>
using namespace std;
class Programmer
{
    int salary;
    protected:
        int id;
        string name;
    public:
        void g()
        {
            cout<<"enter programer id: ";
            cin>>id;
            cout<<"enter programer name: ";
            cin>>name;
            cout<<"enter programer salary: ";
            cin>>salary;
        }
        void p(){
            cout<<"\nProgrammer id: "<<id;
            cout<<"\nProgrammer name: "<<name;
            cout<<"\nProgrammer salary: "<<salary;
        }
};
class Tester
{
    int salary;
    protected:
        int id;
        string name;
    public:
        void gg()
        {
            cout<<"enter Tester id: ";
            cin>>id;
            cout<<"enter Tester name: ";
            cin>>name;
            cout<<"enter Tester salary: ";
            cin>>salary;
        }
        void pp(){
            cout<<"\nTester id: "<<id;
            cout<<"\nTester name: "<<name;
            cout<<"\nTester salary: "<<salary;
        }
};
int main()
{
    Programmer p;
    Tester t;
    cout<<"\n\nProgramer details\n\n";
    p.g();
    p.p();
    cout<<"\n\nTester details\n\n";
    t.gg();
    t.pp();
    return 0;

}