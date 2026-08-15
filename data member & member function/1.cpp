// create a class movie with movieid,moviename,ticketprice and create two member functions input(),display(). Take input from the user and display the details.

#include<iostream>
using namespace std;
class movie
{
    public:
        int id;
        string name;
        int price;

        void input()
        {
            cout<<"enter movie id : ";
            cin>>id;
            cout<<"enter movie name : ";
            cin>>name;
            cout<<"enter movie price : ";
            cin>>price;
        }

        void display()
        {
            cout<<"\nMovie id : "<<id;
            cout<<"\nMovie name : "<<name;
            cout<<"\nMovie price : "<<price<<endl;
        }
};

int main()
{
    movie m1;
    m1.input();
    m1.display();
    return 0;
}