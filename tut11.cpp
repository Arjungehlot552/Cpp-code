#include <iostream>
using namespace std;

int main()
{

    // *************** Break statements ******************// break mean direct niche pohoouch jao

    // for (int  i = 0; i < 40; i++)
    // {
    //     /* code */
    //     cout<<i<<endl;
    //     if (i == 10)
    //     {
    //         break;
    //     }
    // }

    //**************** Continue statement******************// continue mean last tk scan kro

    for (int i = 0; i < 10; i++)
    {
        /* code */
        if (i == 5)
        {
            continue;
        }
        cout << i << endl;
    }

    return 0;
}