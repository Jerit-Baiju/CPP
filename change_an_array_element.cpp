#include <stdio.h>
#include <iostream>
using namespace std;

int main()
{
    string nums[10] = {"Volvo", "BMW", "Ford"};
    nums[0] = "Opel";
    cout << nums[0];
    return 0;
}
