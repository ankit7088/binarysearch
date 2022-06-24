int solve(string s) {
    int n=s.size();
    vector<int> v(26,0);
    for(int i=0;i<n;i++){
        if(v[s[i]-'a']!=0)
        return i;
        v[s[i]-'a']++;
    }
    return -1;
}