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
    {                       \
        cout << val << " "; \
    }                       \
    cout << endl;
#define all(_a) _a.begin(), _a.end()
#define mx(_a) *max_element(all(_a))
#define mn(_a) *min_element(all(_a))
#define sum(_a) accumulate(all(_a), 0);
#define nn '\n'
#define ok cout << "OK" << nn;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll test, tst;
    cin >> test;
    for (tst = 1; tst <= test; tst++)
    {
        ll n, i, m, a, b, j, k, sm = 0;
        string st;
        cin >> st;
        queue<char> qsn;
        bool f = 1;
        ll f1 = 1;
        ll un = 0;
        for (i = 0; i < st.size(); i++)
        {
            if (((qsn.size() < 2) && (st[i] == '0')) || (qsn.empty() && (st[i] == '-')))
            {
                f = 0;
                break;
            }
            else if (st[i] == '1')
            {
                if (f1 == 2)
                {
                    f = 0;
                    break;
                }
                f1 = 1;
            }
            else if (st[i] == '0')
            {
                if (f1 == 1)
                {
                    f = 0;
                    break;
                }
                    un=qsn.size();
                f1 = 2;
            }
            else if (st[i] == '+')
            {
                if ((qsn.size() == 1) || f1 == 0)
                {

                    f1 = 0;
                }
                else if ((qsn.size() > 1) && f1 == 2)
                {
                    f1 = 2;
                }
                else if ((qsn.size() > 1) && f1 == 1)
                {
                    f1 = 1;
                }

                qsn.push('+');
                if (qsn.size() == 1)
                    f1 = 1;
            }
            else if (st[i] == '-')
            {
                if (qsn.empty())
                {
                    f = 0;
                    break;
                }
                else
                {
                    qsn.pop();
                }
              
                if (qsn.size() < 2)
                {
                    f1 = 1;
                }
                else if(qsn.size()<un)
                {
                    f1=0;un=0;
                }
            }
        }
        // cout << "after i=" << i << " f1=" << f1 << nn;
        // queue<char> qq;
        // qq = qsn;
        // while (!qsn.empty())
        // {
        //     cout << qsn.front() << " ";
        //     qsn.pop();
        // }
        // cout << nn;
        // qsn = qq;

        if (f)
            cout << "YES" << nn;
        else
            cout << "NO" << nn;
    }
    return 0;
}
