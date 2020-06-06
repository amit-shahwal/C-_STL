#include <bits/stdc++.h>
using namespace std;

int p[1000];
//function
void pf(int n)
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
                if (p[i * k] == 0)
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
    pf(n);
    vector<int> pp;
    while (n != 1)
    {
        pp.push_back(p[n]);
        n = n / p[n];
    }
    for (int i = 0; i < pp.size(); i++)
    {

        cout << pp[i] << " ";
    }
}
