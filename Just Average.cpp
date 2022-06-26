bool solve(vector<int>& nums, int k) {
    int n=nums.size();
    int sum=accumulate(nums.begin(),nums.end(),0);
    int check=count(nums.begin(),nums.end(),sum-k*(n-1));
    return (check!=0)?true:false;
}