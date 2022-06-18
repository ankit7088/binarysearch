vector<vector<int>> solve(vector<int>& nums) {
    vector<vector<int>> ans;
    int n=nums.size();
    if(n==0)
    return ans;
    sort(nums.begin(),nums.end());
    vector<int> v;
    v.push_back(nums[0]);
    for(int i=1;i<n;i++){
        if(nums[i]!=nums[i-1]+1)
        {
            v.push_back(nums[i-1]);
            
            ans.push_back(v);

            v.clear();
            v.push_back(nums[i]);

        }
        
        
    }
    v.push_back(nums[n-1]);
    ans.push_back(v);
    return ans;
    
}