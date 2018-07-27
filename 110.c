/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
 int getDepth(struct TreeNode* root){
     if (root == NULL) return 0;
     int depthl = getDepth(root->left);
     int depthr = getDepth(root->right);
     return depthl > depthr ? depthl + 1 : depthr + 1;
 }
 
bool isBalanced(struct TreeNode* root) {
    if (root == NULL) return true;
    if (!isBalanced(root->left)) return false;
    if (!isBalanced(root->right)) return false;
    int depthl = getDepth(root->left);
    int depthr = getDepth(root->right);
    if ( abs(depthl - depthr) <= 1){
        return true;
    } else return false;
}

