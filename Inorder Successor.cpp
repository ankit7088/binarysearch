/**
 * class Tree {
 *     public:
 *         int val;
 *         Tree *left;
 *         Tree *right;
 * };
 */

int solve(Tree* root, int t) {
    int successor=0;
    while(root!=NULL){
        if(root->val<=t){
            root=root->right;
        }
        else
        {
            successor=root->val;
            root=root->left;

        }
    }
    return successor;
}