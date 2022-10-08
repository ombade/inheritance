#include <iostream>
using namespace std;
void arrayOfPoinyter()
{
    int a[5];
    int *ptr2[5];
    cout << "Enter five numbers :";
    for (int i = 0; i < 5; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < 5; i++)
    {
        ptr2[i] = &a[i];
    }
    cout << "The values are";
    for (int i = 0; i < 5; i++)
    {
        cout << *ptr2[i];
    }
}
void array()
{
    int *ptr;
    int marks[10];
    cout << "Enter the elements of an array :";
    for (int i = 0; i < 2; i++)
    {
        cin >> marks[i];
    }
    ptr = marks; // marks and ptr pointing to same element
    cout << "The value of *ptr is :" << *ptr;
    cout << "The value of *marks is :" << *marks;

    // The value of *ptr is :0x61ff08The value of *marks is :3 for &ptr
    // The value of *ptr is :0x61fee0The value of *marks is :0 for ptr
}

int main()
{
    arrayOfPoinyter();
}