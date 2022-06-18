int solve(int n) {
    string li = to_string(n);
    int m=li.size();
    for(int i=0;i<m;i++){
        if(li[i]!='3')
        {
            li[i]='3';
            break;
        }
    }
    return stoi(li);
}