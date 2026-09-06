#include<iostream>
using namespace std;
class stud
{
    private:
        int m1,m2,m3;
    protected:
        int rollno;
        string name;
    public:
        void input()
        {
            cout<<"\n\nstudent information\n\n";
            cout<<"enter student name: ";
            cin>>name;
            cout<<"enter student rollno: ";
            cin>>rollno;
            cout<<"enter student marks: ";
            cin>>m1>>m2>>m3;
        }
        void display()
        {
            cout<<"\nStudent Rollno: "<<rollno;
            cout<<"\nStudent name: "<<name;
            cout<<"\nStudent subject 1 mark: "<<m1;
            cout<<"\nStudent subject 2 mark: "<<m2;
            cout<<"\nStudent subject 3 mark: "<<m3;
            int total = m1+m2+m3;
            cout<<"\nTotal marks: "<<total;
            float per = total/3;
            cout<<"\nPercentage of Student: "<<per;
        }
};
int main()
{
    stud s1;
    s1.input();
    s1.display();
    return 0;
}