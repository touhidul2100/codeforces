#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vl vector<ll>
#define ff first
#define ss second
#define pb push_back
#define read(_a, _n)              \
    for (auto i = 0; i < _n; i++) \
        cin >> _a[i];
#define show(_a)            \
    for (auto &val : _a)    \
        cout << val << " "; \
    cout << endl;
#define all(_a) _a.begin(), _a.end()
#define mx(_a) *max_element(all(_a))
#define mn(_a) *min_element(all(_a))
#define nn '\n'
#define ok cout << "OK" << nn;
#define M 10000007
ll ara[100001];

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll test,k;
    cin>>test;
    for(k=1;k<=test;k++){
    ll n, k, i, j, sm = 0;
    cin >> k >> n;
    ll cnt = 0;
    ll cn = 0;
    sm = 1;
    ll pp=k;
    bool f=0;
    while (k--)
    {
        // cout<<"sm="<<sm<<" k="<<k<<" cn="<<cn<<nn;
        cnt++;
        --pp;
        if (pp<= n - sm && f==0)
        {
            // cout<<"lp1"<<nn;
            cout << sm << " ";
            cn++;
            sm = sm + cn;

        }
        // if(n - cnt < n - sm)
        else 
        { f=1;
            // cout<<"lp2"<<nn;
            cout <<sm-cn+1<<" ";
            sm=sm-cn;
            sm++;
            cn=0;
        
        }
    }
    cout << nn;
    }
    return 0;
}
