/*Program that create two class Mark(m1, m2, m3) and Stud (sid,
name). Using single inheritance input 5 students. Display only
those students who pass in all subjects.*/
#include<iostream>
using namespace std;
class mark
{
    protected:
    int m1,m2,m3;
    public:
        void getmark()
        {
            cout<<"Enter Three subjects of marks: ";
            cin>>m1>>m2>>m3;
        }
        void putmark()
        {
            cout<<"\nSubject 1 mark: "<<m1;
            cout<<"\nSubject 2 mark: "<<m2;
            cout<<"\nSubject 3 mark: "<<m3;
        }
};
class stud:public mark
{
    int id;
    string name;
    public:
        void input()
        {
            cout<<"Enter student id and name : ";
            cin>>id>>name;
        }
        void desplay()
        {
            cout<<"\n\nStudent information \n\n";
            if(m1>40 && m2>40 && m3>40){
                cout<<"Student id: "<<id;
                cout<<"\nStudent name: "<<name;
                putmark();
            }
        }
};
int main()
{
    stud s[5];
    int i;
    for(i=0;i<5;i++)
    {
        s[i].input();
        s[i].getmark();
    }
    for(i=0;i<5;i++){
        s[i].desplay();
    }
    return 0;
}