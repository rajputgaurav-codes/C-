// create a class bank with private:accBalance and public:input() and display().
#include<iostream>
using namespace std;
class bank
{
    private:
        string name;
        int accBalance;
    public:
        void input(){
            cout<<" Enter account holder name : ";
            cin>>name;
            cout<<" Enter account holder balance : ";
            cin>>accBalance;

        }
        void display()
        {
            cout<<"Account holder name : "<<name;
            cout<<"\nAccount holder balance : "<<accBalance;
        }
};
int main()
{
    bank b1;
    b1.input();
    b1.display();
    return 0;
}