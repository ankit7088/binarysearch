vector<int> solve(vector<int>& v) {
    int n=v.size();
    for(int i=2;i<n;i++){
        if(i%2==0)
        {
            int temp;
            temp=v[i];
            v[i]=v[i-2];
            v[i-2]=temp;
        }
        else{
            int temp;
            temp=v[i];
            v[i]=v[i-2];
            v[i-2]=temp;
            i+=2;

        }
    }
    return v;
}