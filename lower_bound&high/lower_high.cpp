#include <bits/stdc++.h>
using namespace std;
// int arr[9] = {0, 1, 2, 3, 5, 5, 5, 7, 8};
int arr[20];
int low_b(int k, int n)
{
    int lo = 0;
    int hi = n - 1;

    while (hi - lo > 1)
    {
        int mid = (hi + lo) / 2;
        if (arr[mid] < k)
        {
            lo = mid + 1;
        }
        else if (arr[mid] >= k)
        {
            hi = mid;
        }
    }
    if (arr[lo] >= k)
        return lo;
    if (arr[hi] >= k)
        return hi;

    return n;
}
int upper_b(int k, int n)
{
    int lo = 0;
    int hi = n - 1;

    while (hi - lo > 1)
    {
        int mid = (hi + lo) / 2;
        if (arr[mid] <= k)
        {
            lo = mid+1;
        }
        else if (arr[mid] > k)
        {
            hi = mid;
        }
    }
    if (arr[lo] > k)
        return lo;
    if (arr[hi] > k)
        return hi;

    return n;
}




int main()
{

    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int k;
    cin >> k;
    cout<<endl<<endl;
    cout << "low_b:"<<low_b(k, n);
    cout<<"upper_b:"<<upper_b(k,n);
}