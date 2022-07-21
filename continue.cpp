#include <stdio.h>
#include <iostream>
using namespace std;

int main()
{
    // continue
    for (int i = 0; i < 10; i++)
    {
        if (i == 4)
        {
            continue;
        }
        cout << i << "\n";
    }
    // skips the value 4
    return 0;
}
