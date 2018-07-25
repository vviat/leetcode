/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
// int maxDepth(struct TreeNode* root) {
//     int n = 0, m = 0;
//     if(root == NULL) return 0;
//     if(root->left == NULL && root->right == NULL) return 1 + (n>=m?n:m);
//     if(root->left != NULL) {
//         n++;
//         maxDepth(root->left);
//     }
//     if(root->right != NULL) {
//         n++;
//         maxDepth(root->right);
//     }
    
//     return 1+(n>=m?n:m);
// }

// int maxDepth(struct TreeNode* root) {
//         int max = 0;
//     int mleft = 0, mright = 0;
//         if (root != NULL) {
//             max++;
//             mleft = mleft + maxDepth(root->left);
//             mright = mright + maxDepth(root->right);
//             max = mleft>mright ? mleft:mright;
//         }
//         return max;
// }

int maxDepth(struct TreeNode* root) {
        int max = 0;
        if (root != NULL) {
            max++;
            int max_left = maxDepth(root->left);
            int max_right = maxDepth(root->right);

            max += max_left>max_right ? max_left:max_right;
        }
        return max;
    }
