// create a class Book with title and author.
#include<iostream>
using namespace std;
class book
{
    public:
    string title;
    string author;
};

int main()
{
    book b1;
    b1.title = "A red flag";
    b1.author = "Gaurav";

    cout<<"Book title : "<<b1.title<<endl;
    cout<<"Book author : "<<b1.author;
    return 0;

}