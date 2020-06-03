#include <bits/stdc++.h>
using namespace std;

int main()
{
    set<int> st;
    int a[10];
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for (int i = 0; i < n; i++)
    {
        st.insert(a[i]);
    }

    set<int>::iterator it, ti;
    for (it = st.begin(); it != st.end(); it++)
    {
       ti=st.find(*it - 10);
       if(ti!=st.end())
       {
           cout<<"found";
           exit(0);
       }



    }
    ti = st.find(3);
    if (ti != st.end())
    {
        cout << "found";

}