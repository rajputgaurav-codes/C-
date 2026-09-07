// program that create two class mark(m1,m2,m3) and stud (sid,name).using single inheritance input & display all informataion with total marks.
#include<iostream>
using namespace std;
class marks
{
    private:
        int m1,m2,m3;
    protected:
        void g()
        {
            cout<<"Enter three subject marks: ";
            cin>>m1>>m2>>m3;
        }
        void p()
        {
            cout<<"\nMeks 1: "<<m1;
            cout<<"\nMeks 2: "<<m2;
            cout<<"\nMeks 3: "<<m3;
            cout<<"\n Total Marks is : "<<m1+m2+m3;
        }
};
class stud:private marks
{
    private:
        int sid;
        string name;
    public:
        void input()
        {
            cout<<"enter student id : ";
            cin>>sid;
            cout<<"enter student name : ";
            cin>>name;
            g();
        }
        void display()
        {
            cout<<"\n\nstudent id : "<<sid;
            cout<<"\nstudent name : "<<name;
            p();   
        }
};
int main()
{
    stud s1;
    s1.input();
    s1.display();
    return 0;
}