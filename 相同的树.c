/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */

// int preorder(struct TreeNode *root) {
//     if (root == NULL) return ;
//     int i= 0;
//     int a[100] = {0};
//     while(root != NULL){
//         a[i] = root->val;
//         ++i;
//         preorder(root->left);
//         preorder(root->right);
//     }
//     return a;
// }
// bool isSameTree(struct TreeNode* p, struct TreeNode* q) {
//     if(strcmp(preorder(p), preorder(q)) == 0) return true;
//     else return false;
// }

bool isSameTree(struct TreeNode* p, struct  TreeNode* q) {
         if(q == NULL && p == NULL) return true;
         if(q != NULL && p!= NULL){
             if(q->val != p->val) return false;
             else return isSameTree(p->left, q->left) && isSameTree(p->right, q->right);
         } else return false;
}
