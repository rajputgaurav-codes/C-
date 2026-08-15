// create a claa book having bookid,bookname,price. create a constructor to initiliaze all three values and a destructor that displays
#include<iostream>
using namespace std;
class book
{
    public:
        int bookid;
        string bookname;
        int price;

        book()
        {
            bookid = 101;
            bookname = "Mahatma Gandhi";
            price = 250;
        }
        ~book()
        {
            cout<<"Book id: "<<bookid<<endl;
            cout<<"Book name: "<<bookname<<endl;
            cout<<"Book price: "<<price;
        }

};

int main()
{
    book b1;
    "There are following book details";
    return 0;
}