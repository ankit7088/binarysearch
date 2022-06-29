int solve(string s) {
    int n=s.length();
    stack<char> st;

    for(int i=0;i<n;i++){
        if(s[i]=='(')
        st.push(s[i]);
        if(s[i]==')'){
            if(!st.empty() && st.top()=='(')
            st.pop();
            else
            st.push(s[i]);
        }
    } 
    return st.size();
}