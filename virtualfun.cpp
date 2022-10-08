#include <iostream>
using namespace std;

class A
{
public:
    virtual void show()
    {
        cout << "Content of base class.";
    }
};
class B : public A
{
public:
    void show()
    {
        cout << "Content of derived class.";
    }
};
int main()
{
    A b, *bptr; // Base class pointer
    B d;        // Derived class object
    bptr = &b;

    bptr->show(); // Dynamic Binding Occurs
    bptr = &d;
    cout << endl;
    bptr->show(); // Dymanic Binding Occurs
    return 0;
}