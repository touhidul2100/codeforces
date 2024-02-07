#include<bits/stdc++.h>
using namespace std;

int subarraysDivByk(vector<int>& nums, int k){
    int sum = 0;
    int rem = 0;
    int count =0;
    unordered_map<int,int> mp;
    for(int i = 0; i < nums.size(); i++){
        sum += nums[i];
         rem = sum % k;
        if(rem < 0)
             rem = rem + k;
        if(rem == 0)
             count++;
        if(mp.find(rem) != mp.end()){
             count += mp[rem];
             mp[rem]++;}
        else{
            mp[rem]=1;}
    }
    return count;
}
int main()
{
    int n;
    cin>>n;
    vector<int>nums;
    int x;
    for (int i = 0; i < n; i++)
    {
        cin>>x;
        nums.push_back(x);
    }
    cout<<subarraysDivByk(nums,n)<<endl;

}