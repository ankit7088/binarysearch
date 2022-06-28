string solve(string s0, string s1) {
    string s="";
    int n=s0.length();
    int m=s1.length();
    for(int i=0;i<max(n,m);i++){
        if(i<n)
        s+=s0[i];
        if(i<m)
        s+=s1[i];
    }
    return s;
}