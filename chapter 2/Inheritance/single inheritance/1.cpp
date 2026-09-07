// create class match with total match,run,wicket and class cric with id,name. using single inheritance,input and display all information.
#include<iostream>
using namespace std;
class match
{
    
        int totalmatch;
        int run;
        int wicket;
        public:
        void g()
        {
             cout<<"enter Total match : ";
            cin>>totalmatch;
            cout<<" enter Player run : ";
            cin>>run;
            cout<<"enter Player wicket : ";
            cin>>wicket;
        }
        void p()
        {
            cout<<"\nTotal match : "<<totalmatch;
            cout<<"\nRun : "<<run;
            cout<<"\nWicket : "<<wicket;
        }
    
};
class cric:public match
{
    public:
        int id;
        string name;
        void input()
        {
            cout<<"enter Player id : ";
            cin>>id;
            cout<<"enter Player name : ";
            cin>>name;
            g();
        }
        void display()
        {
            cout<<"\n\n Player id : "<<id;
            cout<<"\n Player name : "<<name;
            p();
        }
        
};
int main()
{
    cric c;
    c.input();
    c.display();
    return 0;
}