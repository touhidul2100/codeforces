 #include <bits/stdc++.h>
 using namespace std;
 #define ll long long
 #define vl vector<ll>
 #define ff first
 #define Optimization() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0); cerr.tie(0)
 #define ss second
 #define pb push_back
 #define pl pair<ll,ll>
 #define vpl vector<pl>
 #define fileread(x) freopen(x,"r",stdin)
 #define filewrite(x) freopen(x,"w",stdout)
 #define read(_a, _n) for (auto i = 0; i < _n; i++)cin >> _a[i];
 #define show(_a)for (auto &val : _a) {cout << val << " ";} cout << endl;
 #define all(_a) _a.begin(), _a.end()
 #define mx(_a) *max_element(all(_a))
 #define mn(_a) *min_element(all(_a))
 #define sum(_a) accumulate(all(_a),0);
 #define pi = 2 * acos(0.0);
 #define nn '\n'
 #define inf 1e18
 #define N 2000005
 #define ok cout << "OK" << nn;
 int main()
 {
 Optimization();
 //fileread("input.txt");
 //filewrite("output.txt");
  ll Cases = 1;
    cin >> Cases;
     for(ll Test = 1; Test <= Cases; Test++){
         // cout << "Case " << Test << ": ";
     ll n, i,m,a,b, j, k, sm = 0;
 string st;
 cin>>n>>st;
 ll c2=0,c3=0,c7=0,c5=0;
 bool dne=0;
 for(i=0;i<n;i++)
 {
    ll tm=st[i]-48;
    if(tm==1||tm==4||tm==6||tm==8||tm==9)
    {
        cout<<1<<nn<<tm<<nn;
        dne=1;break;
    }

 }
  if(dne)continue;
 for(i=0;i<n;i++)
 {
    ll tm=st[i]-48;
   if(tm==2 && i!=0)
    {
        cout<<2<<nn<<st[0]<<tm<<nn;dne=1;break;
    }
    else if(tm==2)c2++;
    else if(tm==5 && i!=0)
    {
        cout<<2<<nn<<st[0]<<tm<<nn;dne=1;break;
    }
    else if(tm==5)c5++;
      else if(tm==7)
    {
        if(c2>0)
        {
            cout<<2<<nn<<27<<nn;dne=1;break;
        }
        else if(c7>0)
        {
            cout<<2<<nn<<77<<nn;dne=1;break;
        }
          else if(c5>0)
        {
            cout<<2<<nn<<57<<nn;dne=1;break;
        }
        else c7++;
    }
    if(tm==3 && c3>0)
    {
        cout<<2<<nn<<33<<nn;
        dne=1;
        break;
    }
    else if(tm==3)c3++;
 }


    } return 0;
 }
 