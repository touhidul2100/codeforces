#include <bits/stdc++.h>
using namespace std;
#define n1 1e5
// int prime(int n)
// {
//     int i, x, t;
//     bool flag = 0;
//     if (n <= 2)
//     {
//         t = 1;
//     }
//     if (n % 2 == 0)
//     {
//         flag = 1;
//         t = 2;
//     }
//     else
//     {
//         for (i = 3; i <= sqrt(n); i++)
//         {
//             if (n % i == 0)
//             {
//                 flag = 1;
//                 t = i;
//                 break;
//             }
//         }
//     }
//     if (flag == 0)
//     {
//         t = 1;
//     }
//     return t;
// }
pair<int,int>prime(int n )
{
    pair<int,int>p1,p2,p3;
    int ara[n1+1];
    int i,j;
    for(i=1;i<=n1;i++)
    {
        ara[i]=0;
    }
    for(j=1;j<=sqrt(n1);j++)
    {
        for(i=2;i<=n1;i++)
        {
            if(ara[i]==0){
            ara[j*i]=1}
        }
    }
    ara[2]=0;
    if(ara[n]==0)
    {
        pair<int,int>p={0,1};
        return p;
    }
    else
    {
        if(n%2==0)
        {
            pair<int,int>p={1,2};
            return p;
        }
        else
        {
            for(i=3;i<=sqrt(n);i=i+2)
            {
                if(n%i==0)
                {
                    pair<int,int>p={1,i};
                    return p;
                }
            }
        }
    }
    //
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n,r2,r3,r1;
        pair<int,int>r,tem,t1,t2;
        bool flag = 0;
        cin >> n;
        r = prime(n);

        if (r.first == 0)
        {
            // tem=n;
            r2=2;
            while(1)
           {
            r3=n-r2-1;
            t1=prime(r2);
             t2=prime(r3);
            if(t1.first==0 && t2.first==0)
            {
                cout<<r2<<" "<<r3<<" "<<1<<endl;
                break;
            }
            else
            r2++;
           }
        }
        else if (r == 1)
        {
            r1 = n / r;
           
            tem = prime(r1);
            cout << n - r1 - tem << " " << r1 << " " << tem << endl;
        }
    }
}