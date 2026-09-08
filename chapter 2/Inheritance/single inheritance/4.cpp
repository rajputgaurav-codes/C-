#include<iostream>
using namespace std;
class employee
{
    private:
        int id;
        string name;
    public:
        int basicsalary;
        void input()
        {
            cout<<"Enter employee id: ";
            cin>>id;
            cout<<"Enter employee name: ";
            cin>>name;
            cout<<"Enter employee basicsalary: ";
            cin>>basicsalary;

        }
        void display()
        {
            cout<<"\n\nEmployee id: "<<id;
            cout<<"\n\nEmployee name: "<<name;
            cout<<"\n\nEmployee basicsalary: "<<basicsalary;
        }
};
class salary: public employee
{
    private:
        int bonus;
        int totalsalary;
    public:
        void get()
        {
            input();
            cout<<"enter employee bonus: ";
            cin>>bonus;
        }
        void put()
        {
            display();
            totalsalary = basicsalary + bonus;
            cout<<"\n\nTotal salary: "<<totalsalary;
        }
};
int main()
{
    salary s;
    s.get();
    s.put();
    return 0;
}
