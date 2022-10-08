#include <iostream>
using namespace std;
class base_one
{
public:
    base_one()
    {
        cout << "base_one class constructor\n";
    }
    ~base_one()
    {
        cout << "base_one class destructor" << endl;
    }
};
class base_two
{
public:
    base_two()
    {
        cout << "base_two class constructor\n";
    }
    ~base_two()
    {
        cout << "base_two class destructor\n";
    }
};
class derived : public base_one, public base_two
{
public:
    derived()
    {
        cout << "derived class constructor\n";
    }
    ~derived()
    {
        cout << "derived class destructor\n";
    }
};
int main()
{
    derived d;
    return 0;
}
