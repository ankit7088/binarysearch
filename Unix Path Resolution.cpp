vector<string> solve(vector<string>& path) {
    vector<string> ans;
    int n=path.size();
    stack<string> st;
    for(int i=0;i<n;i++){
        if(path[i]==".."){
            if(!st.empty()){
                st.pop();
            }
            continue;
        }
        if(path[i]==".")
        continue;
        st.push(path[i]);
    }
    while(!st.empty()){
        ans.push_back(st.top());
        st.pop();
    }
    reverse(ans.begin(),ans.end());
    return ans;
}