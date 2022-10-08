#include <iostream>
using namespace std;
class inc
{
public:
    int a;
    int c;
    inc()
    {
        a = 0;
        c = 0;
    }
    inc(int y, int x)
    {
        a = y;
        c = x;
    }

    void showdata()
    {
        cout << "value of a is" << a << endl;
        cout << "value of c is" << c << endl;
    }
    // inc operator++()
    // {
    //     inc temp;
    //     temp = ++a;
    //     return temp;
    // }
    friend inc operator+(inc e, inc f);
    void sum(string a, string b)
    {
        string c = a + b;
        cout << c;
    }
    void sum(int a, int b)
    {
        int c = a + b;
        cout << c;
    }
};
inc operator+(inc e, inc f)

{
    inc temp;
    temp.a = e.a + e.a;
    temp.c = f.c + f.c;
    return temp;
}
int main()
{
    int y = 3;
    inc s1(1, 2);
    // s1.showdata();
    inc s2(1, 2);
    inc s3;
    s3 = s1 + s2;
    // s2.showdata();
    // s3.showdata();
    inc s4, s5;
    s4.sum(3, 4);
    s5.sum("ddd", "ppp");
}