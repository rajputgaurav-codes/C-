// Write a C++ program that input & display student detaile. using oops concept?
#include<iostream>
using namespace std;
class stud
{
    private:
        int id;
        string name;
    public: 
        void input()
        {
            cout<<"Enter Student id: ";
            cin>>id;
            cout<<"Enter Student Name: ";
            cin>>name;
        }
        void display();
};
void stud::display()
{
    cout<<"Student id: "<<id;
    cout<<"student name: "<<name;
}
int main()
{
    stud s1;
    s1.input();
    s1.display();
    return 0;
}