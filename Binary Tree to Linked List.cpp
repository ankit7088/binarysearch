/**
 * class Tree {
 *     public:
 *         int val;
 *         Tree *left;
 *         Tree *right;
 * };
 */

/**
 * class LLNode {
 *     public:
 *         int val;
 *         LLNode *next;
 * };
 */
 void help(Tree* root,LLNode* &curr){
     if(root==NULL)
     return ;
     help(root->left,curr);
     LLNode* dummy=new LLNode(root->val);
     curr->next=dummy;
     curr=curr->next;
     help(root->right,curr);
 }
LLNode* solve(Tree* root) {
    LLNode* node=new LLNode(1);
    LLNode* curr=node;
    help(root,curr);
    return node->next;
}