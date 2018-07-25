/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
// bool isSymmetric(struct TreeNode* root) {
//      if(root == NULL) return true;
//          if(root != NULL){
//              if(root->left != root->right) return false;
//              else return isSameTree(p->left, p->right) && isSameTree(p->right, q->leftt);
//          } else return false;
// }
bool isSymmetric1(struct TreeNode *left,struct TreeNode *right) {
        if (left == NULL && right == NULL) return true;
        if (left == NULL || right == NULL) return false;
        if (left->val != right->val) return false;
        if (!isSymmetric1(left->left, right->right)) return false;
        if (!isSymmetric1(left->right, right->left)) return false;
        return true;
    }
 bool isSymmetric(struct TreeNode *root) {
        if (root == NULL) return true;
        return isSymmetric1(root->left, root->right);
    }
