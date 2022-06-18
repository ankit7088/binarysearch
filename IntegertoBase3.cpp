string solve(int n) {
    string s="";
    if(n==0)
    s+=to_string(0);
     while(n){
        int rem = n%3;
        n = n/3;
        s= to_string(rem) + s;
    }
        
    return s;
}