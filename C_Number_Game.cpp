#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vl vector<ll>
#define ff first
#define ss second
const int N = 40000;
// bool isprime(ll n)
// {
//     ll i;
//     bool flag = 1;
//     if (n == 1)
//         flag = 0;
//     else if (n == 2)
//         flag = 1;
//     else
//     {
//         for (i = 3; i <= sqrt(n); i + 2)
//         {
//             if (n % i == 0)
//             {
//                 flag = 0;
//                 break;
//             }
//         }
//     }
//     return flag;
// }
bool isprime(int n){
	for(int i = 2; i < min(N, n); i++)
		if(n % i == 0)
			return 0;
	return 1;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin>>t;
    while(t--){
   ll n,i,j,k;
   cin>>n;
   if(n==1)cout<<"FastestFinger"<<endl;
   else if(n==2)cout<< "Ashishgup"<<endl;
    else if(ceil(log2(n))==floor(log2(n)))
   {
    cout<<"FastestFinger" <<endl;
   }
   else if(n%2==1)
   cout<< "Ashishgup" <<endl;
   else if(n%4==0)
   {
cout<< "Ashishgup" <<endl;
   }
   else if(n%2==0)
   {
    if(isprime(n/2))
     cout<<"FastestFinger" <<endl;
     else
     cout<< "Ashishgup" <<endl;
   }
    }
    return 0;
}
