vector<int> solve(vector<int>& nums) {
    int index=0;

    for(int i=0;i<nums.size();){
        int j=i+1;
        while(j<nums.size() && nums[i]==nums[j]) j++;
        for(int k=0;k<2 && k<j-i;k++)
        nums[index++]=nums[i];
        i=j;
    }
    nums.resize(index);
    return nums;
}