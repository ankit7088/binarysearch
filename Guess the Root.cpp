int solve(int n) {
    int ans=0;
    for(int i=0;i*i<=n;i++){
        if(i*i<=n)
        ans=i;
    }
    return ans;
}