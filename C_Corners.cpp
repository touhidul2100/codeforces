#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vl vector<ll>
#define ff first
#define ss second
#define pb push_back
#define read(_a, _n) for (auto i = 0; i < _n; i++)cin >> _a[i];
#define show(_a)for (auto &val : _a) {cout << val << " ";} cout << endl;
#define all(_a) _a.begin(), _a.end()
#define mx(_a) *max_element(all(_a))
#define mn(_a) *min_element(all(_a))
#define nn '\n'
#define ok cout << "OK" << nn;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll test,tst;
    cin>>test;
    for(tst=1;tst<=test;tst++){
    ll n, i, j, k, sm = 0;
    ll r,c;
    cin>>r>>c;
    ll ara[r][c];
    for(i=0;i<r;i++)
    {
        string st;
        cin>>st;
        for(j=0;j<c;j++)
        {ara[i][j]=st[j]-'0';
        sm+=ara[i][j];}
    }
    ll final=0;
    bool f=0;
    for(i=0;i<r-1;i++)
    {
        for(j=0;j<c-1;j++)
        {
            ll tm=ara[i][j]+ara[i+1][j]+ara[i][j+1]+ara[i+1][j+1];
            if(tm<=2){
                final=2;
                f=1;
                break;
            }
           else if(tm==3)
            {
                final =1;
            }
        }
        if(f)break;
    }
    if(final>1)cout<<sm<<nn;
    else if(final==1)cout<<sm-1<<nn;
    else cout<<sm-2<<nn;}
    return 0;
}
