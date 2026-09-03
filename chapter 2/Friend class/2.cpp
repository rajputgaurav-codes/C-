// create strident and result classes make result a friend of student and display students pricate marks.
#include<iostream>
using namespace std;
class result;
class student
{
    int rollno;
    string name;
    int marks;
    public:
        void input()
        {
            cout<<"enter student rollno : ";
            cin>>rollno;
            cout<<"enter student name : ";
            cin>>name;
            cout<<"enter student marks : ";
            cin>>marks;
        }
        friend class result;
       
};
class result
{
    public:
        void display(student s1)
        {
            cout<<"\n\nstudent rollno : "<<s1.rollno<<endl;
            cout<<"\n\nstudent name : "<<s1.name<<endl;
            cout<<"\n\nstudent marks : "<<s1.marks<<endl;
        }
};
int main()
{
    student s1;
    result r;
    s1.input();
    r.display(s1);
    return 0;
}