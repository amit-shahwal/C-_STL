#include<bits/stdc++.h>
using namespace std;

struct data
{
    string name;
    int marks;
}a[10];

int cmp(data p, data q)
{
    if(p.marks!=q.marks)
   return p.marks < q.marks;
   else
   {
       return p.name <q.name;
   }
   
}
int main()
{
int n,i;
cin>>n;
for (int i = 0; i < n; i++)
{
    cin>>a[i].name;
    cin>>a[i].marks;
}

sort(a,a+n,cmp);
for (int i = 0; i < n; i++)
{
    cout<<a[i].name<<endl;
    cout<<a[i].marks<<endl;
}
}