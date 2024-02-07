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
     cout.precision(10); cout.setf(ios::fixed);
    ll test,tst;
    cin>>test;
    for(tst=1;tst<=test;tst++){
   long  double n,d,h, i, j, k, sm = 0;
    cin>>n>>d>>h;
    vector<double> v(n);read(v,n);
    long double area=(long double)d*h/2.0;
    sm=area;
for(i=0;i<n-1;i++)
{
    if(v[i]+h<=v[i+1])
    {
        
        sm+=area;
    }
    else 
    {

       double t1=(v[i]+h-v[i+1]);
       double t=v[i+1]-v[i];
       double t3=(long double)(t1/h)*d;
       double ar=((t3+d)*t)/2.0;
       sm+=ar;

    }

}


cout<<sm<<nn;}
    return 0;
}
