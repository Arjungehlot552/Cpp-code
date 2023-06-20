#include <iostream>
using namespace std;

int main()
{
    int arr[5];
    arr[0] = 1;
    arr[1] = 2;
    arr[2] = 3;
    arr[3] = 5;
    arr[4] = 6;

    for (int i = 0; i < 5; i++)
    {
        if (arr[i + 1] - arr[i] == 2)
        {
            cout << i + 2;
        }
    }
    return 0;
}