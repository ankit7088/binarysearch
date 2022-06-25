vector<int> solve(string s) {
    vector<int> result;
    int n=s.length();
    vector<int> hashAlphabets(26,0);
    unordered_set<char> st;
    int ans=0;
    for(int i=0;i<n;i++){
        hashAlphabets[s[i]-'a']++;
    }
    for(int i=0;i<n;i++){
        st.insert(s[i]);
        hashAlphabets[s[i]-'a']--;
        ans++;
        if(hashAlphabets[s[i]-'a']==0){
            st.erase(s[i]);
            if(st.empty()){
                result.push_back(ans);
                ans=0;
            }
        }
    }
    return result;
}