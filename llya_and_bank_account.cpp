#include <bits/stdc++.h>
using namespace std;
int main()
{
    string st;
    int i,j,c=0;
    bool flag=false;
    cin >> st;
     int l =st.size();
    if (st[0] != '-')
        cout << st << endl;
    else
    {
        if (st[l - 1] >= st[l - 2])
        {
            st.erase(l - 1);
            if(l>=2){
                for ( i = 1; i < l; i++)
                {
                    if (st[i] == '0')
                {
                    c++;
                }
                else
                    break;
                }
            }
        }
        else
        {
            st.erase(l - 2, 1);
            for (i = 1; i < l; i++)
            {
                if (st[i] == '0')
                {
                    c++;
                }
                else
                    break;
            }
        }
        if (c!=0&&st[c+1]>48)
            {
                cout<<"-";
                for(i=c+1;i<l;i++)
                cout<<st[i];
                cout<<endl;
            }
        else if(c==0&&st.size()>1)
            cout << st << endl;
            else
            cout<<0<<endl;
    }
}