int solve(vector<int>& nums) {
    int votes=0,candidate=0;
    int n=nums.size();
    for(int i=0;i<n;i++){
        if(votes==0){
            candidate=nums[i];
            votes=1;
        }
        else{
            if(nums[i]==candidate){
                votes++;
            }
            else
            votes--;

        }
    }
    int ct=0;
    for(int i=0;i<n;i++){
        if(candidate==nums[i])
        ct++;
    }
    if(ct>n/2)
    return candidate;
    return -1;
}