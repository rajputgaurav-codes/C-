// create a class book with bookid and book name and display it.
#include<iostream>
using namespace std;
class book
{
    public:
        int bookid;
        string bookname;
};
int main(){
    book b1;
    b1.bookid = 1;
    b1.bookname = "The story of lencho";
    cout<<"book_id : "<<b1.bookid<<endl;
    cout<<"book_name : "<<b1.bookname;
    return 0;

}