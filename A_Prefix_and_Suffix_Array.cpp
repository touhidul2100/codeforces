// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     vector<char> v;
//     int i, j, c1, c2, n, n1;
//     string st = "", st1, st2, st3;
//     cin >> n;
//     n1 = 2 * n - 2;
//     for (i = 0; i < n1; i++)
//     {
//         cin >> st1;
//         st = st + st1;
//     }
//     int n2 = st.size();
//     st1 = st;
//     sort(st1.begin(), st1.end());
//     while (st1[0] == st1[1])
//     {
//         st1.erase(0, 2);
//         if (st1.size() == 1)
//             break;
//     }
  
//     if (st1.size() <= 1)

//     {
//         if (st1.size() == 1)
//         {

//             for (i = 0; i < st.size(); i++)
//             {
//                 v.push_back(st[i]);
//             }
//             sort(v.begin(), v.end());
//             auto it = unique(v.begin(), v.end());
//             int n5 = it - v.begin();
//             if ((n5 + 1) % 2 == 0)
//                 cout << "YES" << endl;
//             else
//                 cout << "NO" << endl;
//         }
//         if (st1.size() == 0)
//         {

//             for (i = 0; i < st.size(); i++)
//             {
//                 v.push_back(st[i]);
//             }
//             sort(v.begin(), v.end());
//             auto it = unique(v.begin(), v.end());
//             int n5 = it - v.begin();
//             if (n5 % 2 == 0)
//                 cout << "YES" << endl;
//             else
//                 cout << "NO" << endl;
//         }
//     }
//     else
//         cout << "NO" << endl;
//     return 0;
// }
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<int>
#define ff first
#define ss second
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin>>t;
    while(t--){
    long long int n, i, j;
    bool flag = 0;
    cin >> n;
    string st, st1, st2;
    for (i = 0; i < 2 * n - 2; i++)
    {
        cin >> st;
        
            if (st.size() == n - 1 && flag == 0)
             {   st1 = st;
             flag=1;
        }
        else if  (st.size() == n - 1 && flag == 1)
        {
           
                st2 = st;
        }
    }
  //  reverse(st1.begin(), st1.end());
     reverse(st1.begin(), st1.end());
    // cout<<st1<<endl;
if(st1==st2)cout<<"YES"<<endl;
else cout<<"NO"<<endl;}
    return 0;
}
