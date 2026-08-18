// create employee class with eid,name,marks. input 5 students and display only student having marks greater than 70.
#include<iostream>
using namespace std;
class student
{
    public:
     int eid;
     string name;
     int marks;
    public:
        void input()
        {
            cout<<"enter Student id : ";
            cin>>eid;
            cout<<"enter Student name : ";
            cin>>name;
            cout<<"enter Student marks : ";
            cin>>marks;
        }
        void display()
        {
            cout<<"\n\nStudents information \n\n";
            cout<<"\n\nStudent id : "<<eid;
            cout<<"\nStudent name : "<<name;
            cout<<"\nStudent marks : "<<marks;
        }
};
int main()
{
    student s[5];
    for(int i=0;i<5;i++){
        cout<<"Student : "<<i+1<<"details"<<endl;
        s[i].input(); 
    }
    for(int i=0;i<5;i++){
        if(s[i].marks > 70){
            s[i].display();
        }

    }
    return 0;
}

