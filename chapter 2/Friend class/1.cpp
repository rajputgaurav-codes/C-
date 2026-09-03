// friend class
#include<iostream>
using namespace std;
class B;
class A
{
    private:
        int x;
    public:
        A()
        {
            x=15;
        }
        friend class B;
};
class B
{
    public:
    void display(A a)
    {
        cout<<"Value of x is : "<<a.x;
    }
};
int main()
{
    A a;
    B b;
    b.display(a);
    return 0;

}