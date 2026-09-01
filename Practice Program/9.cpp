// Write a C++ program that input & display student detaile. using structure?
#include<iostream>
using namespace std;
struct stud{
    int id;
    string name;
}s;
void input();
void display();
int main()
{
    input();
    display();
    return 0;
}
void input()
{
    cout<<"Enter student id: ";
    cin>>s.id;
    cout<<"Enter student name: ";
    cin>>s.name;
}
void display()
{
    cout<<"\n\nStudent id: "<<s.id;
    cout<<"\nStudent name: "<<s.name;
}