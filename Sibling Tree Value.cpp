/**
 * class Tree {
 *     public:
 *         int val;
 *         Tree *left;
 *         Tree *right;
 * };
 */
 
int solve(Tree* root, int k) {
    int ans=0;
    queue<Tree*> q;
     q.push(root);
     while(!q.empty()){
         int s=q.size();
         for(int i=0;i<s;i++){
             Tree* frontEle=q.front();
             q.pop();
             if(frontEle->left!=NULL && frontEle->left->val==k)
             ans=frontEle->right->val;
             if(frontEle->right!=NULL && frontEle->right->val==k)
             ans=frontEle->left->val;
             if(frontEle->left) q.push(frontEle->left);
             if(frontEle->right) q.push(frontEle->right);
         }
         if(ans!=0)
         break;
     }
     return ans;
}