// create a class student and print private name and marks using a friend function.

#include<iostream>
using namespace std;
class student
{
    private:
        string name = "Gaurav";
        int matks = 85;
       friend void display(student);
};

void display(student s){
    cout<<"Student name : "<<s.name<<endl;
    cout<<"Student marks : "<<s.matks;
}

int main(){
    student s1;
    display(s1);
    return 0;
}