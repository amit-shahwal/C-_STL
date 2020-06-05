//lower bound stl
#include <bits/stdc++.h>
using namespace std;

int main() 
{
  int n;
  cin>>n;
  int k=sqrt(n);
  for(int i=2;i<=k;i++)
  {
    if(n%i==0)
    {cout<<"no";
    exit(0);}

  }
cout<<"yes";
    return 0;
}
