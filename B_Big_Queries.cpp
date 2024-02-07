#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vl vector<ll>
#define ff first
#define Optimization()       \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);             \
    cerr.tie(0)
#define ss second
#define pb push_back
#define pl pair<ll, ll>
#define vpl vector<pl>
#define fileread(x) freopen(x, "r", stdin)
#define filewrite(x) freopen(x, "w", stdout)
#define read(_a, _n)              \
    for (auto i = 0; i < _n; i++) \
        cin >> _a[i];
#define show(_a)            \
    for (auto &val : _a)    \
    {                       \
        cout << val << " "; \
    }                       \
    cout << endl;
#define all(_a) _a.begin(), _a.end()
#define mx(_a) *max_element(all(_a))
#define mn(_a) *min_element(all(_a))
#define sum(_a) accumulate(all(_a), 0);
#define pi = 2 * acos(0.0);
#define nn '\n'
#define inf 1e18
#define N 300005
#define ok cout << "OK" << nn;
ll  ara[N];
ll tree2[N * 3], tree5[N * 3];
ll up[N * 3];
ll pre[N * 3];
void init(ll node, ll i, ll j)
{
    
    if (i > j)
        return;
        //cout<<"node"<<node<<"lf:"<<i<<" "<<j<<nn;
    if (i == j)
    {
        ll tm = 0;
        ll t2 = 5;
        while (ara[i] >= t2)
        {
            if (ara[i] % t2 == 0)
            {
                tm += 1;
                t2 *= 5;
            }
            else
                break;
        }
        tree5[node] = tm;
        //
        tm = 0;
        t2 = 2;
        while (ara[i] >= t2)
        {
            if (ara[i] % t2 == 0)
            {
                tm += 1;
                t2 *= 2;
            }
            else
                break;
        }
        tree2[node] = tm;
      //  cout<<"node="<<node<<" ar="<<ara[i]<<" "<<tree2[node]<<" "<<tree5[node]<<nn;
        return;
    }
    ll mid = i + (j - i) / 2;
    init(node * 2, i, mid);
    init(node * 2 + 1, mid + 1, j);
    tree5[node] = tree5[node * 2] + tree5[node * 2 + 1];
    tree2[node] = tree2[node * 2] + tree2[node * 2 + 1];
}

void update1(ll node, ll left, ll right, ll i, ll j, ll num2, ll num5)
{
    if (left > j || right < i)
        return;
    if (left >= i && right <= j)
    {
        tree2[node] += (num2 * (right - left + 1));
        tree5[node] += (num5 * (right - left + 1));
        return ;
    }
    ll mid = left + (right - left) / 2;
    update1(node * 2, left, mid, i, j, num2, num5);
    update1(node * 2 + 1, mid + 1, right, i, j, num2, num5);
    tree5[node] = tree5[node * 2] + tree5[node * 2 + 1];
    tree2[node] = tree2[node * 2] + tree2[node * 2 + 1];
}
void update2(ll node, ll left, ll right, ll i, ll j, ll num2, ll num5)
{
    if (left > j || right < i)
        return;
    if (left >= i && right <= j)
    {
        ll st = left - i + 1;
        ll en = (j - i + 1) - (j - right);
        ll tm = 0;
        ll t2 = 5;
        while (st - 1 >= t2)
        {
            tm += ((st - 1) / t2);
            t2 *= 5;
        }
        ll tm2 = 0;
        t2 = 5;
        while (en >= t2)
        {
            tm2 += (en / t2);
            t2 *= 5;
        }
        tm = tm2 - tm;
        tree5[node] = tm + num5;
        //
        tm = 0;
        t2 = 2;
        while (st - 1 >= t2)
        {
            tm += ((st - 1) / t2);
            t2 *= 2;
        }
        tm2 = 0;
        t2 = 2;
        while (en >= t2)
        {
            tm2 += (en / t2);
            t2 *= 2;
        }
        tm -= tm2;
        tree2[node] = tm + num2;
        // up[node] = time;
        return ;
    }
    ll mid = left + (right - left) / 2;
    update2(node * 2, left, mid, i, j, num2, num5);
    update2(node * 2 + 1, mid + 1, right, i, j, num2, num5);
    tree5[node] = tree5[node * 2] + tree5[node * 2 + 1];
    tree2[node] = tree2[node * 2] + tree2[node * 2 + 1];
}
pl result(ll node, ll left, ll right, ll i, ll j)
{
    if (left > j || right < i)
        return {0, 0};
    if (left >= i && right <= j)
    {
        return {tree2[node], tree5[node]};
    }
    ll mid = left + (right - left) / 2;
    pl a1 = result(node * 2, left, mid, i, j);
    pl a2 = result(node * 2 + 1, mid + 1, right, i, j);
    return {a1.ff + a2.ff, a1.ss + a2.ss};
}
int main()
{
    // Optimization();
    // fileread("input.txt");
    // filewrite("output.txt");
    ll Cases = 1;
    // cin >> Cases;
    for (ll Test = 1; Test <= Cases; Test++)
    {
        // cout << "Case " << Test << ": ";
        ll i,n, m, a, b, j, k, q, c, d;
        cin >> n >> q;
        for (i = 1; i <= n; i++)
            cin >> ara[i];
        for (i = 1; i <= 3 * n; i++)
        {
            tree2[i] = 0, tree5[i] = 0, up[i] = 0;
        }
        init(1, 1, n);
       //for(i=1;i<=3*n;i++)cout<<"node="<<i<<"="<<tree2[i]<<" "<<tree5[i]<<endl;
        for (i = 1; i <= q; i++)
        {
            cin >> a;
            if (a == 1)
            {
                cin >> b >> c >> d;
                ll tm5 = 0;
                ll t5 = 5;
                while (d >= t5)
                {
                    if (d % t5 == 0)
                    {
                        tm5 += 1;
                        t5 *= 5;
                    }
                    else
                        break;
                }
                ll tm2 = 0;
                ll t2 = 2;
                while (d >= t2)
                {
                    if (d % t2 == 0)
                    {
                        tm2 += 1;
                        t2 *= 2;
                    }
                    else
                        break;
                }
                cout<<"in up1="<<tm2<<" "<<tm5<<nn;
                update1(1, 1, n, b, c, tm2, tm5);
                continue;
            }
            if (a == 2)
            {
                cin >> b >> c >> d;
                ll tm5 = 0;
                ll t5 = 5;
                while (d >= t5)
                {
                    if (d % t5 == 0)
                    {
                        tm5 += 1;
                        t5 *= 5;
                    }
                    else
                        break;
                }
                ll tm2 = 0;
                ll t2 = 2;
                while (d >= t2)
                {
                    if (d % t2 == 0)
                    {
                        tm2 += 1;
                        t2 *= 2;
                    }
                    else
                        break;
                }
                 cout<<"in up2="<<tm2<<" "<<tm5<<nn;
                update2(1, 1, n, b, c, tm2, tm5);
                continue;
            }
            if (a == 3)
            {
                
                cin >> b >> c;
                pl an = result(1, 1, n, b, c);
                cout << min(an.ff, an.ss) << nn;
               
            }
        }
    }
    return 0;
}
