/**
 * class Tree {
 *     public:
 *         int val;
 *         Tree *left;
 *         Tree *right;
 * };
 */
 void help(Tree* root,int level,map<int,vector<int>> &m){
     if(root==NULL)
     return;
     m[level].push_back(root->val);
     help(root->left,level+1,m);
     help(root->right,level,m);
 }
vector<int> solve(Tree* root) {
    map<int,vector<int>> m;
    int level=0;
    help(root,level,m);
    vector<int> ans;
    int sum=0;
    for(auto &it:m){
        for(int &ele:it.second){
            sum+=ele;
        }
        ans.push_back(sum);
        sum=0;
    }
    return ans;
}