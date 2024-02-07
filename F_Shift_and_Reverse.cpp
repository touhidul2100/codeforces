#include<bits/stdc++.h>
using namespace std;
#define MAXN 100010
int t,n,a[MAXN];
int main(){

		cin>>n;
		for(int i=1;i<=n;++i) cin>>a[i];a[0]=a[n+1]=0;
		int num1=0,num2=0,pos1=0,pos2=0;
        for(int i=0;i<=n+1;i++)cout<<a[i]<<" ";cout<<endl;
		for(int i=1;i<=n;++i)if(a[i]<a[i-1]) ++num1,pos1=i;
		for(int i=n;i>=1;--i)if(a[i]<a[i+1]) ++num2,pos2=i;
        cout<<"num1="<<num1<<" pos1="<<pos1<<endl;
        cout<<"num2="<<num2<<" pos2="<<pos2<<endl;
		int ans=INT_MAX;
		if(!num1) ans=0;
		if(num1==1&&a[n]<=a[1]) ans=min(ans,min(n-pos1+1,pos1+1));
		if(!num2) ans=min(ans,1);
		if(num2==1&&a[1]<=a[n]) ans=min(ans,min(n-pos2+1,pos2+1));
		if(ans==INT_MAX) ans=-1;
		cout<<ans<<endl;
	
	return 0;
}
     