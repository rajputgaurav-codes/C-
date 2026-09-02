// Program to create class employee witheid, ename and salaey. Input 5 employeedetails and display those emp whoseannual salary>250000(Array of object).
#include<iostream>
using namespace std;
class employee
{
    public:
    int salary;
        int id;
        string name;
    
        void getdata()
        {
            cout<<"Enter employee id: ";
            cin>>id;
            cout<<"Enter employee name: ";
            cin>>name;
            cout<<"Enter employee salary: ";
            cin>>salary;
        }
        void display()
        {
            
            
                cout<<"\n\nEmployee id: "<<id;
                cout<<"\nEmployee name: "<<name;
                cout<<"\nEmployee salary: "<<salary;
            
        }
};
int main(){
    employee e[5];
    cout<<"\n\nEnter employee details\n\n";
    for(int i=0;i<5;i++)
    {
        e[i].getdata();
    
    }
    for(int i=0;i<5;i++)
    {
        if(e[i].salary*12>=250000)
        {
            e[i].display();
        }
    }
    
    return 0;
}