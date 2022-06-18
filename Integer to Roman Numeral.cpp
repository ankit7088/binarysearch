string solve(int n) {
    string st="";
    vector<int> v{1000,900,500,400,100,90,50,40,10,9,5,4,1};
    vector<string> s{"M","CM","D","CD","C","XC","L","XL","X","IX","V","IV","I"};

    int m=v.size();
    for(int i=0;i<m;i++){
        while(n>=v[i]){
            st+=(s[i]);
            n-=v[i];
        }
    }
    return st;
}