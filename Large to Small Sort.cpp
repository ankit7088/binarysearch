vector<int> solve(vector<int>& nums) {
    vector<int> v;
    int flag=0;
    sort(nums.begin(),nums.end());
    int n=nums.size();
    for(int i=0;i<n;){
        if(v.size()>=n)
        break;
        if(flag==0){
            v.push_back(nums[n-1-i]);
            flag=1;
        }
        else{
            v.push_back(nums[i]);
            flag=0;
            i++;
        }

    }
    return v;
}