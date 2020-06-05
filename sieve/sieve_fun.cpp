#include <bits/stdc++.h>
using namespace std;

int p[12];
//taking all is prime
void sieve(int n)
{
    p[0] = 1;
    p[1] = 1;
    int k=sqrt(n);
    for (int i = 2; i <=k; i++)//order is root(n)*loglog(n)
    {
        if (p[i] == 0)
        {
            int j = 2;
            while (i * j <= n)
            {
                p[i * j] = 1;
                j++;
            }
        }
    }
}

int main()
{
    int n;
    cin >> n;
    sieve(n);
    for (int i = 0; i <= n; i++)
    {
        if(p[i]== 0)
        cout<<i<<endl;
    }
}