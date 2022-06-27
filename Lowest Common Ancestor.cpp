/**
 * class Tree {
 *     public:
 *         int val;
 *         Tree *left;
 *         Tree *right;
 * };
 */
 int help(Tree* root, int a, int b){
     if(root==NULL) 
     return 0;
     if(root->val==a || root->val==b)
     return root->val;
     
     int left=help(root->left,a,b);
     int right=help(root->right,a,b);

     if(left && right)
     return root->val;
     
     return (left==0)?right:left;
     
 }
int solve(Tree* root, int a, int b) {
    return help(root,a,b);
}