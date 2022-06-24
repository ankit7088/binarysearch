int solve(int makeSum,int &k){
    if(makeSum>k){
        if(makeSum%k!=0)
            return (makeSum/k)+1;
        else
        return makeSum/k;
        }
        else
        return 1;
}
int solve(vector<int>& nums, int k, int target) {
    int sum=accumulate(nums.begin(),nums.end(),0);
    int makeSum=target-sum;
    if(makeSum==0)
    return 0;
    if(makeSum>0){
        return solve(makeSum,k);
    }
    return solve(-1*makeSum,k);
    
}