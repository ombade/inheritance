#include <iostream>
using namespace std;
class ClassA
{
public:
    int a;
};
class ClassB : virtual public ClassA
{
public:
    int b;
};
class ClassC : virtual public ClassA
{
public:
    int c;
};
class ClassD : public ClassB, public ClassC
{
public:
    int d;
};
int main()
{
    ClassD obj;

    obj.a = 100; // Statement 3
    obj.b = 20;
    obj.c = 30;
    obj.d = 40;
    cout << "A : " << obj.a;
    cout << "B : " << obj.b;
    cout << "C : " << obj.c;
    cout << "D : " << obj.d;
}