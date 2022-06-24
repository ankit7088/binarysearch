vector<int> solve(vector<int>& nums) {
    int n=nums.size();
    int start=0,end=1;
    while(end<n){
        if(nums[start]==0 && nums[end]!=0)
        {
            nums[start]=nums[end];
            nums[end]=0;
            start++;
            end++;
        }
        if(nums[start]==0 && nums[end]==0){
            end++;
        }
        if(nums[start]!=0 && nums[end]!=0)
        {
            start++;
            end++;
        }
        if(nums[start]!=0 && nums[end]==0){
            start++;
            end++;
        }
    }
    return nums;
}