#include <iostream>
using namespace std;

class Shape
{
protected:
    float dimension;

public:
    void getDimension()
    {
        cin >> dimension;
    }
    // pure virtual Function
    virtual float calculateArea() = 0;
};
class Square : public Shape
{
public:
    float calculateArea()
    {
        return dimension * dimension;
    }
};

class Circle : public Shape
{
public:
    float calculateArea()
    {
        return 3.14 * dimension * dimension;
    }
};

int main()
{
    Square s;

    Circle c;
    cout << "Enter length of a square: ";
    s.getDimension();
    cout << "Area of square:";
    s.calculateArea();
    cout << "Enter radius of a circle:";
    c.getDimension();
    cout << "Area of circle: ";
    c.calculateArea();
    return 0;
}