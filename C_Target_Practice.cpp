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
    string ara[10];
    for(i=0;i<10;i++)
    {
        cin>>ara[i];
    }

    for(i=0;i<10;i++)
    {
        for(j=0;j<10;j++)
        {
           
            if(ara[i][j]=='X')
            {
                 ll row=i+1,col=j+1;
                if(row==1||row==10||col==1||col==10)
                sm+=1;
                 else if(row==2||row==9||col==2||col==9)
                sm+=2;
                 else if(row==3||row==8||col==3||col==8)
                sm+=3;
                 else if(row==4||row==7||col==4||col==7)
                sm+=4;
                 else if(row==5||row==6||col==5||col==6)
                sm+=5;
               
            }
         
        }
    }
    cout<<sm<<nn;}
    return 0;
}
