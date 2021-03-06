int solve(string a, string b) {
    int n=a.size();
    int m=b.size();
    int t[n+1][m+1];
    for(int i=0;i<=n;i++){
        for(int j=0;j<=m;j++){
            if(i==0 || j==0)
            t[i][j]=0;
            else if(a[i-1]==b[j-1])
            t[i][j]=1+t[i-1][j-1];
            else
            t[i][j]=max(t[i-1][j],t[i][j-1]);
        }
    }
    int lcs=t[n][m];
    return n+m-lcs;
}