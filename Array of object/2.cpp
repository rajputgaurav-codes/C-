// create class student with id name marks.input 5 students and display the student having the highest marks.
#include<iostream>
using namespace std;
class student
{
    public:
       int id;
       string name;
       int marks;
       void input()
       {
         cout<<"enter a student id: ";
         cin>>id;
         cout<<"enter a student name: ";
         cin>>name;
         cout<<"enter a student mark: ";
         cin>>marks;
       }
       void display()
       {
        cout<<"\n\nStudent id : "<<id;
        cout<<"\nStudent name : "<<name;
        cout<<"\nStudent salary : "<<marks;
       }
};
int main()
{
    student s[5];
    int highestmark = 0;

    for(int i=0;i<5;i++){
        cout<<"Student : "<<i+1<<endl;
        s[i].input();
    }
    cout<<"\nstudent having the highest marks\n";

    for(int i=0;i<5;i++){
        if(s[i].marks > s[highestmark].marks){
            highestmark = i;
            
        }
    }

    cout<<"\n\nstudent with highest marks\n\n ";
    s[highestmark].display();
    return 0;
}