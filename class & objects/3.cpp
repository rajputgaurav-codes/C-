// create a class employee with id,name,and salary,then print the details.
#include<iostream>
using namespace std;
class emp
{
    public:
        int id;
        string name;
        int salary;

        void p()
        {
            cout<<"Employee id : ";
            cin>>id;
            cout<<"Employee name: ";
            cin>>name;
            cout<<"Employee salary: ";
            cin>>salary;
        }
        void o()
        {
            cout<<"Employee id : "<<id<<endl;
            cout<<"Employee name : "<<name<<endl;
            cout<<"Employee salary : "<<salary<<endl;
        }
};
int main()
{
    emp e1;
    e1.p();
    e1.o();
    return 0;
}