/**
 * class Tree {
 *     public:
 *         int val;
 *         Tree *left;
 *         Tree *right;
 * };
 */
vector<int> solve(Tree* root) {
    vector<int> v;
    map<int,int> m;
    queue<pair<Tree*,int>> q;
    q.push({root,0});
    while(!q.empty()){
        int sz=q.size();
        for(int i=0;i<sz;i++){
            int line=q.front().second;
            Tree* node=q.front().first;
            if(m.find(line)==m.end()) m.insert({line,node->val});
            q.pop();
            if(node->left){
                q.push({node->left,line-1});
            }
            if(node->right) q.push({node->right,line+1});

        }
    }
    for(auto &it:m){
        v.push_back(it.second);
    }
    return v;
}