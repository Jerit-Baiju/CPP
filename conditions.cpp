#include <stdio.h>
#include <iostream>
using namespace std;

int main()
{
    int x, y;
    cout << "enter the first number > ";
    cin >> x;
    cout << "enter the second number > ";
    cin >> y;
    if (x > y)
    {
        cout << x << " is greater than " << y;
    }
    else if (x < y)
    {
        cout << x << " is less than " << y;
    }
    else if (x == y)
    {
        cout << x << " is equal to " << y;
    }
    else
    {
        cout << "IDK";
    }
    return 0;
}
