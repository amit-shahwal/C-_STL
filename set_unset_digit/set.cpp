#include<bits/stdc++.h>
using namespace std;

int main()
{

int n;
int count=0;
cin>>n;
int lon=ceil(log2(n));
for (int i = 0; i < lon+1; i++)
{
    if((n & (1<<i))!=0)
    count++;
        /* code */
}
cout<<count<<endl;

cout<<__builtin_popcount(n);

}