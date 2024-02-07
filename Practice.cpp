#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
	// your code goes here
ll n;
cin>>n;
while(n--){
    ll a,b;
    cin>>a>>b;
    ll aa;
    while(a>0){
    if(a>b){
swap(a,b);
    }
    else{
                 aa=a;
        a=b-a;
        b=aa;
    }
    if(a==0)
    break;
}
cout<<b<<endl;
}
return 0;
}