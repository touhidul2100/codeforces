#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vl vector<ll>
#define ff first
#define ss second
#define read(_a, _n)              \
    for (auto i = 0; i < _n; i++) \
        cin >> _a[i];
#define show(_a)         \
    for (auto &val : _a) \
        cout << val << " ";
#define all(_a) _a.begin(), _a.end()
#define mx(_a) *max_element(all(_a))
#define mn(_a) *min_element(all(_a))
#define nn '\n'
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll test;
    cin>>test;
    while(test--){
    ll n, m, i, j, k, c1, num;
    cin >> n;
    vector<vector<ll>> v;
    vector<ll> v5;
    map<ll,ll>mp;
    for (i = 0; i < n; i++)
    {
        ll k;
        cin >> k;
        vl x(k);
       for(j=0;j<k;j++)
       {
        cin>>x[j];
        mp[x[j]]++;
       }
       
        v.push_back(x);
    }

    for(i=0;i<n;i++)
    {
        bool f=0;
        for(j=0;j<v[i].size();j++)
        {
           
            if(mp[v[i][j]]==1 &&f==0)
            {   f=1;
                // cout<<"push="<<v[i][j]<<endl;
                v5.push_back(v[i][j]);
            }
            else if(mp[v[i][j]]>1)
            {
               // cout<<"num="<<v[i][j]<<" mp="<<mp[v[i][j]]<<" mp="<<mp[v[i][j]]-1<<endl;;
                mp[v[i][j]]--;
    
            }
        }
       // cout<<endl;
    }
    if(v5.size()==n)
    {
        show(v5);
       cout<<endl;
    }
    else cout<<-1<<endl;}
    return 0;
}
