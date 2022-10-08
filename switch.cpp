#include <iostream>
using namespace std;
int main()
{
    int ch;
    int n1;
    int n2;
    cout << "Enter the value of number 1 -> ";
    cin >> n1;
    cout << "Enter the value of number 2 -> ";
    cin >> n2;
    ch = 0;
    while (ch != 4)
    {
        cout << "\nMENU \n1)add \n2)sub \n3)div" << endl;
        cout << "Enter the ch ->  ";
        cin >> ch;
        switch (ch)
        {

        case 1:
        {
            cout << "The addition is  -> " << n1 + n2;

            break;
        }
        case 2:
            cout << "The Substraction  is  -> " << n1 - n2;
            break;
        case 3:
            cout << "The division is  -> " << n1 / n2;
            break;
        }
    }

    return 0;
}