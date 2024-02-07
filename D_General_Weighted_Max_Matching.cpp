#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
long long a[26][26],n;
bool flag[26];
long long maxn=0;
void dfs(int step,long long sum)
{
  if(step>n)
  {
    maxn=max(sum,maxn);
    return ;
  }
  if(!flag[step])
  {
      flag[step]=1;
      for(int i=step+1;i<=n;i++)
      {
          if(!flag[i])
          {
              flag[i]=1;
              dfs(step+1,sum+a[step][i]);
              flag[i]=0;
          }
      }
      flag[step]=0;
  }
  dfs(step+1,sum);
  return ;
}
int main()
{
    cin>>n;
    for(int i=1;i<n;i++)
    {
        for(int j=i+1;j<=n;j++)
        {
            cin>>a[i][j];
            a[j][i]=a[i][j];
        }
    }
    dfs(1,0);
    cout<<maxn;
    return 0;
}