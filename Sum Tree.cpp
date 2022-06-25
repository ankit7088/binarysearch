/**
 * class Tree {
 *     public:
 *         int val;
 *         Tree *left;
 *         Tree *right;
 * };
 */
bool solve(Tree* root) {
    int sum=0;
    
    if(root==NULL || (root->left==NULL && root->right==NULL))
    return true;
    else {if(root->left!=NULL)
    sum+=root->left->val;
    if((root->right!=NULL))
    sum+=root->right->val;}
    return ((sum==root->val) && solve(root->left) && solve(root->right));

}