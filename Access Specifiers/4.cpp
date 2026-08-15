// create class laptop: private=price , public=brand and create input() and display().
#include<iostream>
using namespace std;
class laptop
{
    private:
        int price;
    public:
        string brand;
    
    public:
        void input(){
            cout<<" Enter laptop brand name : ";
            cin>>brand;
            cout<<" Enter laptop price : ";
            cin>>price;

        } 
        void display()
        {
            cout<<"laptop brand name : "<<brand;
            cout<<"\nlaptop price : "<<price;
        }
};
int main()
{
    laptop l1;
    l1.input();
    l1.display();
    return 0;
}