bool solve(vector<int>& nums, vector<int>& target) {
    sort(nums.begin(),nums.end());
    sort(target.begin(),target.end());
    if(nums==target)
    return true;
    return false;
}