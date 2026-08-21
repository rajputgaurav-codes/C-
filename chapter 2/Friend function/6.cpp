// create programmer and tester classes with id,name,salary create a friend function that displays total salary after programmer 20% increment and tester 10% increament.
#include<iostream>
using namespace std;
void totalsalary(float,float);
class programmer
{
    private:
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
            cout<<"Programer id : "<<id;
            cout<<"Programer name : "<<name;
            cout<<"Programer salary : "<<salary;
            totalsalary(salary,20);
        }
         friend void totalsalary(float,float);
};
void totalsalary( float salary, float inc)
{
    cout<<"\nTotal salary after increment : "<<salary +(salary*inc)/100;
}

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
            cout<<"Tester id : "<<id;
            cout<<"Tester name : "<<name;
            cout<<"Tester salary : "<<salary;
            totalsalary(salary,10);
        }
                  friend void totalsalary(float,float);
};
int main()
{
    programmer p;
    tester t;
    p.input();
    t.input();
    p.display();
    t.display();
    return 0;
}
