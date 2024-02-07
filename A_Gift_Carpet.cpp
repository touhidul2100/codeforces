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
#define sum(_a) accumulate(all(_a),0);
#define nn '\n'
#define ok cout << "OK" << nn;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll test,tst;
    cin>>test;
    for(tst=1;tst<=test;tst++){
    ll n, i,m,a,b, j, k, sm = 0;
    cin>>n>>m;
    char ara[n][m];
    for(i=0;i<n;i++)for(j=0;j<m;j++)cin>>ara[i][j];
    queue<char>qq;qq.push('v');qq.push('i');qq.push('k');qq.push('a');
    for(i=0;i<m;i++)
    {
        if(qq.empty())break;
        char aa=qq.front();
      //  cout<<aa<<nn;
        for(j=0;j<n;j++)
        {
            if(ara[j][i]==aa)
            {
                qq.pop();
                break;
            }
        }
    }
    if(qq.empty())cout<<"YES"<<nn;
    else cout<<"NO"<<nn;}
    return 0;
}
