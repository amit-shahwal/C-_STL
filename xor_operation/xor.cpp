#include<bits/stdc++.h>
using namespace std;

int main()
{int a[10];
int n;
cin>>n;
int y=0;
for (int i = 0; i < n; i++)
{
    cin>>a[i];
}
for (int i = 0; i < n; i++)
{
     y=y^a[i];

}

cout<<y;
}