/**
 * class Tree {
 *     public:
 *         int val;
 *         Tree *left;
 *         Tree *right;
 * };
 */
 bool check(Tree* root,int level,int &leafLevel){
     if (root == NULL) return true;
 
    if (root->left == NULL &&
        root->right == NULL)
    {
        if (leafLevel == 0)
        {
            leafLevel = level; 
            return true;
        }
 
        return (level == leafLevel);
    }
 
    return check(root->left, level + 1, leafLevel) &&
            check(root->right, level + 1, leafLevel);

 }
bool solve(Tree* root) {
    int leafLevel=0;
    return check(root,0,leafLevel);
}