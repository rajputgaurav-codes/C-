// create a class employee with id and name. and display it.
#include<iostream>
using namespace std;
class employee
{
    public:
        int id;
        string name;
};
int main(){
    employee e1;
    e1.id = 101;
    e1.name = "Gaurav";
    cout<<"id : "<<e1.id<<endl;
    cout<<"name : "<<e1.name;
    return 0;
}