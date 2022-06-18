int solve(vector<int>& nums) {
    unordered_map<int,int> m;
    int n=nums.size();
    for(int i=0;i<n;i++){
        m[nums[i]]++;
    }
    int count=0;
    for(auto it:m){
        if(it.second==2)
        count++;
        if(it.second>2){
            count+=(it.second*(it.second-1))/2;
        }
    }
    return count+n;
}