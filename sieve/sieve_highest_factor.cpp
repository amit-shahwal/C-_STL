#include <bits/stdc++.h>
using namespace std;

int p[30]; //using global array its all the members will be initialized as 0

//function
void lowest_sieve(int n)
{
    int k;
    for (int i = 2; i <= n; i++)
    {

        if (p[i] == 0)
        {
            p[i] = i;
            k = 2;
            while (i * k <= n)
            {
               // if (p[i * k] == 0)
                    p[i * k] = i;
                k++;
            }
        }
    }
}

int main()
{
    int n;
    cin >> n;

    lowest_sieve(n);
    cout << n << "--" << p[n];
}
