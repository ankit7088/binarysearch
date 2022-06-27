/**
 * class Tree {
 *     public:
 *         int val;
 *         Tree *left;
 *         Tree *right;
 * };
 */
 bool help(Tree* left,Tree* right){
     if(left==NULL || right==NULL)
     return left==right;

     if(left->val!=right->val)
     return false;

     return help(left->left,right->right) && help(left->right,right->left);
 }
bool solve(Tree* root) {
    return (root==NULL || help(root->left,root->right));
}