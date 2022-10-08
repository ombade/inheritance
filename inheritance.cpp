#include <iostream>
using namespace std;
class animals
{
public:
    int a;
    void sound()
    {
        cout << "this is sound of animal class" << endl;
    }
};
class dog : virtual public animals
{
public:
    int b;
    void sound()
    {
        cout << "this is sound of dogclass" << endl;
    }
};

class cat : virtual public animals
{
public:
    int c;
    virtual void sound()
    {
        cout << "this is sound of cat class" << endl;
    }
};

class pet : public dog, public cat
{
public:
    int d;
};
int main()
{
    pet x;
    // animals w;
    x.animals::sound();
    // w.a = 34;
    // x.sound();
    // x.a = 6;
    // x.b = 10;
    // x.c = 12;
    // x.d = 14;
    // cout << "r" << w.a << endl;
    // cout << "y" << x.b << endl;
    // cout << "z" << x.c << endl;
    // cout << "w" << x.d << endl;

    return 0;
}