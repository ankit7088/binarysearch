int solve(vector<int>& nums, int k) {
    sort(nums.begin(),nums.end());
    int n=nums.size();
    int ans=INT_MAX;
    int i=0,j=0;
    while(j<n){
        if(j-i+1<n-k)
        j++;
        if(j-i+1==n-k){
            ans=min(ans,nums[j]-nums[i]);
            i++;
            j++;
        }
    }
    return ans;
}