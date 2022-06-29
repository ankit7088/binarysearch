int solve(vector<vector<int>>& intervals) {
    sort(intervals.begin(),intervals.end());
    int n=intervals.size();
    int start=intervals[0][0],end=intervals[0][1];
    int ans=end-start+1;
    for(int i=1;i<n;i++){
        if(end>=intervals[i][0] && intervals[i][1]>end){
            end=intervals[i][1];
        }
        if(intervals[i][0]<start)
        start=intervals[i][0];
        if(intervals[i][0]>end && intervals[i][0]>start){
            start=intervals[i][0];
            end=intervals[i][1];
        }
        ans=max(ans,end-start+1);
    }
    return ans;
}