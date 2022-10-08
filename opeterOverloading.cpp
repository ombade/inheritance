#include <iostream>
using namespace std;
class complex
{
private:
    int real, img;

public:
    complex()
    {
        real = 0;
        img = 0;
    }
    complex(int a, int b)
    {
        real = a;
        img = b;
    }
    // void print()
    // {
    //     cout << real << " - " << img << "i" << endl;
    // }
    void print(char c)
    {
        cout << real << " " << c << " " << img << "i";
    }
    complex operator+(complex c)
    {
        complex temp;

        temp.real = real + c.real;
        temp.img = img + c.img;

        return temp;
    }
    complex operator-(complex c)
    {
        complex temp;

        temp.real = real - c.real;
        temp.img = img - c.img;

        return temp;
    }
    complex operator*(complex c)
    {
        complex temp;

        temp.real = (real * c.real) - (c.img * img);
        temp.img = (c.real * real) + (c.real * img);

        return temp;
    }
};

int main()
{
    complex c1(2, 3);
    complex c2(4, 6);
    complex c3(10, 1);
    complex c4;
    c4 = c1 + c2;
    c3 = c1 * c2;
    // c4.print('+');
    cout << endl;
    c3.print('+');

    return 0;
}
