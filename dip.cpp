#include <iostream>
using namespace std;
class complex
{
    int real, img;

public:
    complex()
    {
        real = 0;
        img = 0;
    }
    complex(int x, int y)
    {
        real = x;
        img = y;
    }
    void getdata()
    {
        cout << "enter the value of real part of complex number" << endl;
        cin >> real;
        cout << "enter the value of imaginary part of complex number" << endl;
        cin >> img;
    }
    void display()
    {
        cout << real << " + " << img << " i ";
    }
    complex operator-(complex x)

    {
        complex temp;

        temp.real = real - x.real;
        temp.img = img - x.img;
        return temp;
    }
    complex operator^(complex x)

    {
        complex temp;

        temp.real = real * x.real - img * x.img;
        temp.img = real * x.img + img * real;
        return temp;
    }
};

int main()
{
    complex s2, s3;
    complex s1(3, 2);
    s1.getdata();
    s2.getdata();
    s3 = s1 ^ s2;
    s3.display();

    return 0;
}
