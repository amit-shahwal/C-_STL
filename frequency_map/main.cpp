#include<bits/stdc++.h>

using namespace std;
int main()
{   int a[1005];
    int n;
    map<int,int>freq;//syntax of map
    cin>>n;
    for (int i = 0; i < n ; i++)
    {
        /* code */
        cin>>a[i];
    }

    for (int  i = 0; i < n; i++)
    {
        freq[a[i]]++;//key is auto created and value by default is zero key is unique
    }
    map<int,int> :: iterator it;//it is like a pointer variable
    for (it=freq.begin();it!=freq.end();it++)
    {
        cout<<it->first<< " " <<it->second<<endl;
    }
    
}
