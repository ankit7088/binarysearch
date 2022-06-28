/**
 * class Tree {
 *     public:
 *         int val;
 *         Tree *left;
 *         Tree *right;
 * };
 */
int help(Tree* root,int &maxi){
    if(root==NULL)
    return 0;

    int lh=max(0,help(root->left,maxi));
    int rh=max(0,help(root->right,maxi));

    maxi=max(maxi,lh+rh+root->val);
    return root->val+max(lh,rh);
}
int solve(Tree* root) {
    int maxi=INT_MIN;
    help(root,maxi);
    return maxi;
}