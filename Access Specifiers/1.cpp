// create a class student with public data members.
#include<iostream>
using namespace std;
class student
{
    public: 
        int rollno;
        string name;
        int marks;
};
int main()
{
    student s1;
    s1.rollno = 25;
    s1.name = "Gaurav";
    s1.marks = 56;

    cout<<" student rollno :  "<<s1.rollno;
    cout<<" \nstudent name :  "<<s1.name;
    cout<<" \nstudent marks :  "<<s1.marks;

    return 0;

}