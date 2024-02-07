#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define max 100000
char ara[100001];
void sieve()
{
    int i, j;

    for (i = 2; i <= 100000; i++)
    {
        ara[i] = 1;
    }
    ara[1] = 0;
    for (i = 2; i <= sqrt(100000); i++)
    {
        if (ara[i] == 1)
        {
            for (j = 2; i * j <= 100000; j++)
            {
                ara[i * j] = 0;
            }
        }
    }
}
int main()
{
    // ios::sync_with_stdio(0);
    // cin.tie(0);
    // cout.tie(0);
    int t;
    cin>>t;
    while(t--){
    sieve();
    ll d,a,b,s;
    cin>>d;
    a=d+1;
   
    while(ara[a]!=1)
    {
        a++;
    }
    // cout<<a<<endl;
    b=a+d;
    while(ara[b]!=1)
    {
        b++;
    }
    // cout<<b<<endl;
    s=a*b;
    cout<<s<<endl;}
    return 0;
}
