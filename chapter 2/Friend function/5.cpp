// friend function display aal three information of student.
#include<iostream>
using namespace std;
class student
{
    private:
        int id;
        string name;
        int marks;
    public:
        void input()
        {
            cout<<"student id: ";
            cin>>id;
            cout<<"student name: ";
            cin>>name;
            cout<<"student marks: ";
            cin>>marks;

        }
        friend void display(student);
};
void display(student s1)
{
    cout<<"student id is : "<<s1.id<<endl;
    cout<<"student name is : "<<s1.name<<endl;
    cout<<"student marks is : "<<s1.marks<<endl;
}

int main()
{
    student s1;
    s1.input();
    display(s1);
    return 0;
}