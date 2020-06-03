//take subset as {2,3,5}
/* its subset will be
{},{2},{3},{5},{2,3},{2,5},{3,5},{2,3,5} // 2^n subset

*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a[50];
    int n;

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        /* code */ cin >> a[i];
    }

    for (int i = 0; i < (1 << n); i++)
    {
        for (int j = 0; j < n; j++)
        {
            /* code */
            if ((i & (1 << j)) != 0)
                cout << " " << a[j];
        }
        cout << endl;
    }
}