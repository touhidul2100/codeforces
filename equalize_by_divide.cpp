#include <bits/stdc++.h>
using namespace std;
bool unq(vector<int> v)
{
    bool flag = 0;
    auto it = unique(v.begin(), v.end());
    v.resize(distance(v.begin(), it));
    if (v.size() == 1)
        flag = 1;

    return flag;
}
int main()
{
    int t;
    cin>>t;
    while(t--){
    int n, i, j;
    long long int c=0;
    bool flag=0;
    cin >> n;
    vector<int> v;
    vector<pair<int, int>> v1;
    for (i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
    // if (unq(v))
    //     cout << 0 << endl;
    while (unq(v) == 0)
    {
        
        int min = *min_element(v.begin(), v.end());
        int j = min_element(v.begin(), v.end()) - v.begin();
        int max = *max_element(v.begin(), v.end());
        int i = max_element(v.begin(), v.end()) - v.begin();
        pair<int, int> p;
        p = make_pair(i + 1, j + 1);
        v1.push_back(p);
        double d=(double)v[i] / v[j];
        v[i]=ceil(d);
        // for(auto a:v)
        // cout<<a<<" ";
        // cout<<endl<<i+1<<" "<<j+1<<endl;
        c++;
        if(c>=30*n)
        {
            flag=true;
            break;
        }
    }
    if(flag)cout<<-1<<endl;
    else{
    cout << v1.size() << endl;
    for (auto x : v1)
        cout << x.first << " " << x.second << endl;}}
}