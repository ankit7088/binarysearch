
int solve(string a, string b, string c) {
    int n=a.length();
    int m=b.length();
    int k=c.length();
    int t[n+1][m+1][k+1];
    for(int i=0;i<=n;i++){
        for(int j=0;j<=m;j++){
            for(int z=0;z<=k;z++){
                if(i==0 || j==0 || z==0)
                t[i][j][z]=0;
                else if(a[i-1]==b[j-1] && a[i-1]==c[z-1])
                t[i][j][z]=1+t[i-1][j-1][z-1];
                else
                t[i][j][z]=max(max(t[i-1][j][z],t[i][j-1][z]),t[i][j][z-1]);
            }
        }
    }
    return t[n][m][k];
}