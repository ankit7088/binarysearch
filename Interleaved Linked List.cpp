/**
 * class LLNode {
 *     public:
 *         int val;
 *         LLNode *next;
 * };
 */
LLNode* solve(LLNode* l0, LLNode* l1) {
    LLNode* root= new LLNode;
    LLNode* node=root;
    cout<<node->val<<" ";
    cout<<root->val<< "";
    while(l0&&l1){
    node->next=l0;
    node=node->next;
    l0=l0->next;
    node->next=l1;
    node=node->next;
    l1=l1->next;
    }
    if(l1==NULL){
        while(l0){
    node->next=l0;
    node=node->next;
    l0=l0->next;
        }
    }
    if(l0==NULL){
        while(l1){
    node->next=l1;
    node=node->next;
    l1=l1->next;
        }
    }
    return root->next;
    
}