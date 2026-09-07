#include<iostream>
using namespace std;
class programmer
{
    int id;
    string name;
    int salary;
    public:
        void input()
        {
            cout<<"enter programmer id: ";
            cin>>id;
            cout<<"enter programmer name: ";
            cin>>name;
            cout<<"enter programmer salary: ";
            cin>>salary;
        }
        friend void display(programmer);

};
void display(programmer p1)
{
    cout<<"Programmer id: "<<p1.id;
    cout<<"Programmer name: "<<p1.name;
    cout<<"Programmer salary: "<<p1.salary;
}
int main()
{
    programmer p1;
    p1.input();
    display(p1);
    return 0;

}