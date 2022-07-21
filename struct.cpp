#include <stdio.h>
#include <iostream>
using namespace std;

int main()
{
    struct
    {
        int my_num;
        string my_string;

    } structure;
    structure.my_num = 1;
    structure.my_string = "Hello world !";
    cout << structure.my_num << "\n";
    cout << structure.my_string << "\n";
    return 0;
}
