int solve(vector<int>& nums, vector<int>& values) {
    int n=nums.size();
    vector<int> v1(n,0),v2(n,0);
    for(int i=0;i<n;i++){
        v1[i]=values[i]-nums[i];
        v2[i]=values[i]+nums[i];
    }
    
    return *max_element(v1.begin(),v1.end())+*max_element(v2.begin(),v2.end());
}