// Create a class Employee with the following data members:
#include<iostream>
using namespace std;
class employee
{
    protected:
        int id;
        float basicsalary;
        float hra;
        float da;
     public:
        string name;
        float grosssalary;
        void input(){
            cout<<"Enter employee id: ";
            cin>>id;
            cout<<"Enter employee name: ";
            cin>>name;
            cout<<"Enter employee Basic salary: ";
            cin>>basicsalary;
        }
        void display()
        {
            cout<<"\nEmployee id: "<<id;
            cout<<"\nEmployee name: "<<name;
            cout<<"\nEmployee Basic salary: "<<basicsalary;
            hra = basicsalary * 0.20;
            da = basicsalary * 0.10;
            grosssalary = basicsalary + hra+ da;
            cout<<"\nGross salary: "<<grosssalary;
        }

};
int main()
{
    employee e[3];
    int i;
    int highest = 0;
    for(i=0;i<3;i++)
    {
        cout<<"\nEnter employee information : \n"<<i+1;
        e[i].input();
    }
    cout<<"\n\nEmployee details\n\n";
    for(i=0;i<3;i++)
    {
        e[i].display();
    }
    for(i=0;i<3;i++)
    {
        if(e[i].grosssalary > e[highest].grosssalary)
        {
            highest = i;
        }
    }
    cout<<"\n\n Highest Gross salary employees: "
    <<e[highest].name;

    cout<<"\n\nGross Salary: "
    <<e[highest].grosssalary;
}