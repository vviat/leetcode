/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
 // int getvalue(struct TreeNode* root){
 //     if (root == NULL) return 0;
 //     if (!root->left && !root->right) return root->val;
 //     if (!root->left) return getvalue(root->right) ;
 //     if (!root->right) return getvalue(root->left) ;
 //     int depthl = getvalue(root->left);
 //     int depthr = getvalue(root->right);
 //     return depthl + depthr;
 // }

// bool hasPathSum(struct TreeNode* root, int sum) {
//     	// if(root == NULL) return false;
//     	// if(root->left == NULL && root->right == NULL) return root->val == sum ? true: false;
//     	// if(root) {
//     	// if(hasPathSum(root->left,sum - root->val) || hasPathSum(root->right,sum - root->val))
//     	// return true;
//     	// } else return false;
//     //空树返回false
//         if (root == NULL)
//         {
//             return false;
//         }
//         //若是叶子节点，判断返回
//         else if (!root->left && !root->right)
//         {
//             if (root->val == sum)
//                 return true;
//             else
//                 return false;
//         }
//         else
//         {
//             //否则，递归判断左右子树
//             sum -= root->val;

//             return hasPathSum(root->left, sum) || hasPathSum(root->right, sum);
//         }
// }

bool hasPathSum(struct TreeNode* root, int sum) { 
    if(root == NULL) return false;
    if(root->left == NULL && root->right == NULL) return root->val == sum;
    return hasPathSum(root->left, sum - root->val) || hasPathSum(root->right, sum - root->val);
}

