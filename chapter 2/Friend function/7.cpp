#include<iostream>
using namespace std;
class tester;
class programmer
{
    int id;
    string name;
    float salary;

    public:
        void input()
        {
            cout<<"\nenter programer details\n\n";
            cout<<"enter programmer id: ";
            cin>>id;
            cout<<"enter programmer name: ";
            cin>>name;
            cout<<"enter programmer salary: ";
            cin>>salary;
        }
        void display()
        {
            cout<<"\n\nProgramer id : "<<id;
            cout<<"\nProgramer name : "<<name;
            cout<<"Programer salary : "<<salary;
        }
        friend void totsal(programmer,tester);
};
class tester
{
 int id;
    string name;
    float salary;

    public:
        void input()
        {
            cout<<"\nenter Tester details\n\n";
            cout<<"enter Tester id: ";
            cin>>id;
            cout<<"enter Tester name: ";
            cin>>name;
            cout<<"enter Tester salary: ";
            cin>>salary;
        }
        void display()
        {
            cout<<"\n\nTester id : "<<id;
            cout<<"\nTester name : "<<name;
            cout<<"Tester salary : "<<salary;
        }
        friend void totsal(programmer,tester);
};

void totsal(programmer p,tester t)
{
    cout<<"\nTotal salary after increment: "<<p.salary+(p.salary*20)/100<<endl;
    cout<<"\nTotal salary after increment: "<<t.salary+(t.salary*10)/100;
}

int main()
{
    programmer p;
    tester t;
    p.input();
    t.input();
    p.display();
    t.display();
    totsal(p,t);
    return 0;
}