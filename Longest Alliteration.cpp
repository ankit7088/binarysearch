int solve(vector<string>& words) {
    int n=words.size();
    if(n==0)
    return 0;
    if(n==1)
    return 1;
    char start=words[0][0];
    int j=0,ans=0;
    for(int i=1;i<n;i++){
        if(start!=words[i][0]){
            ans=max(ans,i-j);
            start=words[i][0];
            j=i;
        }
    }
    ans=max(ans,n-j);
    return ans;
}