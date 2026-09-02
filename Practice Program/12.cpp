// Write a C++ program that input & display 5 student details.
#include<iostream>
using namespace std;
class stud
{
    private:
        int id;
        char name[25];
    public:
        void input()
        {
            cout<<"Enter student id: ";
            cin>>id;
            cout<<"Enter student name: ";
            cin>>name;
        }
        void display()
        {
            cout<<"Student id: "<<id;
            cout<<"Student name: "<<name;
        }
};
int main()
{
    stud s[5];
    for(int i=0;i<5;i++)
    {
        s[i].input();
    }
    cout<<"\n\nStudent information\n\n";
    for(int i=0;i<5;i++)
    {
        s[i].display();
    }
    return 0;
    
}