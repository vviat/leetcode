/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
/**
 * Return an array of arrays of size *returnSize.
 * The sizes of the arrays are returned as *columnSizes array.
 * Note: Both returned array and *columnSizes array must be malloced, assume caller calls free().
 */
int GetdepthofTree(struct TreeNode* root){
    if (!root) return 0;
    int left = GetdepthofTree(root->left);
    int right = GetdepthofTree(root->right);
    if (left > right)
        return left+1;
    else
        return right+1;
}
 
 
//int** levelOrderBottom(struct TreeNode* root, int** columnSizes, int* returnSize) 
int** levelOrder(struct TreeNode* root, int** columnSizes, int* returnSize){
    if (!root){
        return NULL;
    }
    //获取二叉树的深度，最大层数或者说
    int depth = *returnSize = GetdepthofTree(root);
    
    //ret是一个指向一个二维数组的指针，这一块地址是我们自己开辟的，需要malloc
    int** ret = (int**)malloc(depth*sizeof(int*));
    
    //columnSizes是一个指向指针的指针，这个地址已经指定了，就是说这个地址了存放的下一个地址已经确定了，但是下一个地址里存放的还是地址，这个地址任然不确定，那么就需要malloc了
    //*columnSizes是一个指向一个一维数组的指针，数组的大小也是depth
    
    *columnSizes = (int*)malloc(depth*sizeof(int));
    int front = 0, back = 0;
    struct TreeNode* queue[10000];
    queue[back++] = root;
    int count=0;
    while (front < back){
        int start = front, end = back;
        (*columnSizes)[count] = end - start;
        front = end;
        //开始的时候我们只给了ret的地址，因为ret是一个二维数组的起始地址，但是这个二维数组里面的一维数组的地址并没有确定，就需要malloc来确定
        ret[count] = (int*)malloc((end - start)*sizeof(int));
        for (int i=start; i<end; i++){
            ret[count][i-start] = queue[i]->val;
            if (queue[i]->left) queue[back++] = queue[i]->left;
            if (queue[i]->right) queue[back++] = queue[i]->right;
        }
        count++;
    }
    return ret;
}
