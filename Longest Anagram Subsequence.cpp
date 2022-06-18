int solve(string a, string b) {
    int count=0;
    vector<int> hashA(26,0);
    vector<int> hashB(26,0);
    for(int i=0;i<a.size();i++){
        hashA[a[i]-'a']++;
    }
    for(int i=0;i<b.size();i++){
        hashB[b[i]-'a']++;
    }
    for(char i=0;i<26;i++){
        if(hashA[i]>0 && hashB[i]>0)
        count+=min(hashA[i],hashB[i]);
    }
    return count;


}