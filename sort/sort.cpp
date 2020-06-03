#include <bits/stdc++.h>
//for sort we should use algorithim
using namespace std;

int main()
{
    int n;
    int a[23];
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a, a + n);
    reverse(a, a + n);
    for (int i = 0; i < n; i++)
    {
        cout << a[i];
    }
}