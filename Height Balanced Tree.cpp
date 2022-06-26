/**
 * class Tree {
 *     public:
 *         int val;
 *         Tree *left;
 *         Tree *right;
 * };
 */
 int help(Tree* root){
     if(root==NULL)
     return 0;
     int left=help(root->left);
     if(left==-1) return -1;
     int right=help(root->right);
     if(right==-1) return -1;
     
     if(abs(left-right)>1)
     return -1;
     return 1+max(left,right);
 }
bool solve(Tree* root) {
    return help(root)!=-1;
}