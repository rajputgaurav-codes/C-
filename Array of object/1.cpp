// create class employee with eid, name and salary. input 5 employee details and display those employee whose annual salary>250000.
#include<iostream>
using namespace std;
class employee
{
    public:
       int id;
       string name;
       int salary;
       void input()
       {
         cout<<"enter a employee id: ";
         cin>>id;
         cout<<"enter a employee name: ";
         cin>>name;
         cout<<"enter a employee salary: ";
         cin>>salary;
       }
       void display()
       {
        cout<<"\n\nEmployee id : "<<id;
        cout<<"\nEmployee name : "<<name;
        cout<<"\nEmployee salary : "<<salary;
       }
};
int main()
{
    employee e[5];

    for(int i=0;i<5;i++){
        cout<<"Emplyees : "<<i+1<<endl;
        e[i].input();
    }
    cout<<"\nemployees whose annul salary > 250000:\n";

    for(int i=0;i<5;i++){
        if(e[i].salary*12>250000){
            e[i].display();
        }
    }
    return 0;
}