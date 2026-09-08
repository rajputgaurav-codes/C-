#include<iostream>
using namespace std;
class stud
{
    protected:
        int rollno;
        string name;
        int m1,m2,m3;
    public:
        void get()
        {
            cout<<"enter student rollno: ";
            cin>>rollno;
            cout<<"enter student name: ";
            cin>>name;
            cout<<"enter student 3 subject marks: ";
            cin>>m1>>m2>>m3;
        }
        void put()
        {
            cout<<"\nStudent rollno: "<<rollno;
            cout<<"\nStudent name: "<<name;
            cout<<"\nStudent subject 1 mark: "<<m1;
            cout<<"\nStudent subject 2 mark: "<<m2;
            cout<<"\nStudent subject 3 mark: "<<m3;
        }
};
class result:public stud
{
    public:
        int total;
        float per;

        void display()
        {
            put();
            total = m1+m2+m3;
            cout<<"\nTotal marks of student: "<<total;
            per= total/3.0;
            cout<<"\nPercentage of student: "<<per;
        }
};
int main()
{
    result r[3];
    int i;
    for(i=0;i<3;i++)
    {
        cout<<"\n\nEnter student information: \n\n"<<i+1;
        r[i].get();
    }
    cout<<"\n-------------student details----------------\n";
    for(i=0;i<3;i++)
    {
        r[i].display();
        if(r[i].per >=40 && r[i].per <=100)
        {
            cout<<"\nResult: Pass";
        }
        else{
            cout<<"\nResult: Fail";
        }
    }
    return 0;
}