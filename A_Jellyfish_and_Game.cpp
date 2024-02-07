// #include <bits/stdc++.h>
// using namespace std;
// #define ll long long
// #define vl vector<ll>
// #define ff first
// #define Optimization() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0); cerr.tie(0)
// #define ss second
// #define pb push_back
// #define pl pair<ll,ll>
// #define vpl vector<pl>
// #define fileread(x) freopen(x,"r",stdin)
// #define filewrite(x) freopen(x,"w",stdout)
// #define read(_a, _n) for (auto i = 0; i < _n; i++)cin >> _a[i];
// #define show(_a)for (auto &val : _a) {cout << val << " ";} cout << endl;
// #define all(_a) _a.begin(), _a.end()
// #define mx(_a) *max_element(all(_a))
// #define mn(_a) *min_element(all(_a))
// #define sum(_a) accumulate(all(_a),0);
// #define pi = 2 * acos(0.0);
// #define nn '\n'
// #define inf 1e18
// #define N 2000005
// #define ok cout << "OK" << nn;
// int main()
// {
// Optimization();
// //fileread("input.txt");
// //filewrite("output.txt");
//  ll Cases = 1;
//    cin >> Cases;
//     for(ll Test = 1; Test <= Cases; Test++){
//         // cout << "Case " << Test << ": ";
//     ll n, i,m,a,b, j, k, sm = 0;
// cin>>n>>m>>k;
// vl v1(n),v2(m);read(v1,n);read(v2,m);sort(all(v1));sort(all(v2));
// ll sm1=0,sm2=0;
// if(k&1)
// {

//     for(i=1;i<n;i++)sm1+=v1[i];
//     sm1+=max(v2[m-1],v1[0]);
//     cout<<sm1<<nn;
//     continue;
// }
// else 
// {
//    ll t1=max(v1[0],v2[m-1]);
//    ll t2=min(v1[0],v2[m-1]);
//    v1[0]=t1;v2[m-1]=t2;
//     sort(all(v1));sort(all(v2));
//    sm2=min(v2[0],v1[n-1]);
//    for(i=0;i<n-1;i++)sm2+=v1[i];
//     cout<<sm2<<nn;
//     continue;

// }
//    } return 0;
// }

#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    int t;
    cin>>t;
    while(t--)
    {

        ll n,m,k,sum=0,x,y,sum1=0,a,b;
        cin>>n>>m>>k;
        ll j[n],g[m];
        for(int i=0; i<n; i++)
        {
            cin>>j[i];
            sum+=j[i];
        }
        for(int j=0; j<m; j++)
        {
            cin>>g[j];
            sum1+=g[j];
        }
        a=*min_element(g,g+m);
        x=*max_element(g,g+m);
        b=*min_element(j,j+n);
        y=*max_element(j,j+n);

        if(k%2!=0)
        {
            if(sum>sum1)
                cout<<sum<<endl;
            else
            {
                sum-=b;
                sum+=x;
                cout<<sum<<endl;
            }
        }
        else
        {
            if(sum>sum1)
            {
                sum-=y;
                sum+=a;
                cout<<sum<<endl;
            }
            else
                cout<<sum<<endl;
        }

    }
}