// create a class collage having clgid,clgname and city create a one object take values from the user, and display them.
#include<iostream>
using namespace std;
class collage
{
    public: 
        int id;
        string name;
        string city;

};

int main(){
    collage c1;

    //take user input------------------

    cout<<"Enter collage id : ";
    cin>>c1.id;
     cout<<"Enter collage name : ";
    cin>> c1.name;
     cout<<"Enter collage city : "<<endl;
    cin>> c1.city;
    
    //display information----------------

    cout<<"collage id: "<<c1.id<<endl;
    cout<<"collage name: "<<c1.name<<endl;
    cout<<"collage city: "<<c1.city;
    return 0;
    
}