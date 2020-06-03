//https://www.hackerearth.com/problem/algorithm/chotu-and-sabrina-1/submissions/

#include <bits/stdc++.h>
using namespace std;
//int check(char*);
int countfun(void);
int main()
{
    int t;
    cin >> t;
    int a[10];
    for (int i = 0; i < t; i++)
    {
        a[i] = countfun();
    }
    for (int i = 0; i < t; i++)
    {
        cout << a[i] << endl;
    }
}

int countfun()
{
    string word;
    cin >> word;
    int n, k;
    n = word.size();
    int count = 0;
    string plaindrome;
    char pl[30], rpl[30];
    for (int i = 0; i < (1 << n); i++)
    {
        plaindrome = ""; //needs to be reassigned
        for (int j = 0; j < n; j++)
        {
            /* code */
            if ((i & (1 << j)) != 0)
            {
                // cout << " " << word.at(j);
                char cc = word.at(j);
                // //string strcc=
                //cout<<cc;

                plaindrome = plaindrome + cc;
            }
        }
        // cout<<endl;
        //  cout<<plaindrome.size();
        //  exit(0);
        if (plaindrome.size() != 0)
        {
            string re;
            re = plaindrome;
            reverse(plaindrome.begin(), plaindrome.end());
            if (re == plaindrome)
                count++;
        }
        else
        {
            count++;
        }
    }
    return count;
}
