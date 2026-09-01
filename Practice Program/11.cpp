// create a class name employee that containing e_no,e_nm,sal.getdata and display to the information.
#include<iostream>
using namespace std;
class employee
{
    private:
        int sal;
    protected:
        int e_no;
        char e_nm[25];
    public:
        void getdata()
        {
            cout<<"Enter employee id : ";
            cin>>e_no;
            cout<<"Enter employee name : ";
            cin>>e_nm;
            cout<<"Enter employee sal : ";
            cin>>sal;
        }
        void display()
        {
            cout<<"\n\nEmployee id : "<<e_no;
            cout<<"\nEmployee name : "<<e_nm;
            cout<<"Employee salary : "<<sal;
        }
};
int main()
{
    employee e1;
    e1.getdata();
    e1.display();
    return 0;
}
