// parameterized constructor
#include<iostream>
using namespace std;
class employee
{
    public:
        int id;
        string name;
        int salary;

        employee(int i=101, string n = "Gaurav", float s = 45000.0)
        {
            id = i;
            name= n;
            salary = s;
        }
        void display()
        {
            cout<<"Employee id: "<<id<<endl;
            cout<<"Employee name: "<<name<<endl;
            cout<<"Employee salary: "<<salary<<endl;
        }
};
int main(){
    employee e1;
    e1.display();
    return 0;
}