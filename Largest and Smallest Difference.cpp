int solve(vector<int>& nums, int k) {
    int n=nums.size();
   /* if(n==1 && k==1)
    return nums[0];*/
    int ans=INT_MAX;
    sort(nums.begin(),nums.end());
    int start=0,end=0;
    while(end<n){
        if(end<k-1)
        end++;
       if(end-start==k-1){
            ans=min(ans,(nums[end]-nums[start]));
            start++;
            end++;
        }
    }
    return ans==INT_MAX?0:ans;
}