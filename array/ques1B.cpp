#include <iostream>
using namespace std;

int main()
{
    int arr[100];

    for (int i = 0; i <= 99; i++)
    {
        if (i == 12)
        {
            continue;
        }
        arr[i] = i + 1;
    }

    for (int i = 0; i <= 99; i++)
    {
        if (arr[i + 1] - arr[i] >= 2)
        {
            cout << i + 1;
        }
    }

    return 0;
}