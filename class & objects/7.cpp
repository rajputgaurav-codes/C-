// Create a class Rectangle with data members length and width
#include<iostream>
using namespace std;
class rectangle
{
    private:
        int length;
        int width;
    public:
        void input()
        {
            cout<<"Enter the value of length: ";
            cin>>length;
            cout<<"Enter the value of width: ";
            cin>>width;
        }
        void display()
        {
            int area = length * width;
            cout<<"\nArea of Reactangle: "<<area;
            cout<<"\nParameter of Reactangle: "<<2*(length+width);
        }
};
int main()
{
    rectangle r;
    r.input();
    r.display();
    return 0;
}