/**
 * class Tree {
 *     public:
 *         int val;
 *         Tree *left;
 *         Tree *right;
 * };
 */
 void help(Tree* root,int &totalSum,int &ans){
     if(root==NULL)
     return;
     ans=max(ans,(totalSum-root->val)*root->val);
     help(root->left,totalSum,ans);
     help(root->right,totalSum,ans);
 }
 int sum(Tree* root){
     if(root==NULL)
     return 0;

     int lSum=sum(root->left);
     int rSum=sum(root->right);

     return root->val=root->val+lSum+rSum;
 }
int solve(Tree* root) {
    int totalSum=sum(root);
    int ans=0;
    help(root,totalSum,ans);
    return ans;
}