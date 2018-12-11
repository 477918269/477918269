/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
/**
 * Return an array of size *returnSize.
 * Note: The returned array must be malloced, assume caller calls free().
 */
int TreeSize(struct TreeNode* root)
{
    if(root == NULL)
        return 0;
    else
        return TreeSize(root->right) + TreeSize(root->left) + 1;
}

void _preorderTraversal(struct TreeNode* root, int* PIndex, int* a)
{
    if(root != NULL)
        
    {
        a[* PIndex] = root -> val;
        (*PIndex)++;
        _preorderTraversal(root->left, PIndex,a);
        _preorderTraversal(root->right, PIndex,a);
    }
        
    
}

int* preorderTraversal(struct TreeNode* root, int* returnSize) 
{
    *returnSize = TreeSize(root);
    int* a = (int*)malloc(sizeof(int) * *returnSize);
    int Index = 0;
    _preorderTraversal(root, &Index, a);
    return a;
}

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
/**
 * Return an array of size *returnSize.
 * Note: The returned array must be malloced, assume caller calls free().
 */
int TreeSize(struct TreeNode* root)
{
    if(root == NULL)
        return 0;
    else
        return TreeSize(root->right) + TreeSize(root->left) + 1;
}

void _inorderTraversal(struct TreeNode* root, int* PIndex, int* a)
{
    if(root != NULL)
    {
          
        
    
        _inorderTraversal(root->left, PIndex, a);
        
        _inorderTraversal(root->right, PIndex, a);
        a[(*PIndex)++] = root -> val;
    }
    
}
int* postorderTraversal(struct TreeNode* root, int* returnSize) 
{
    *returnSize = TreeSize(root);
    int* a = (int*) malloc(sizeof(int) * *returnSize);
    int Index = 0;
    _inorderTraversal(root, &Index, a);
    return a;    
}

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
/**
 * Return an array of size *returnSize.
 * Note: The returned array must be malloced, assume caller calls free().
 */
int TreeSize(struct TreeNode* root)
{
    if(root == NULL)
        return 0;
    else
        return TreeSize(root->right) + TreeSize(root->left) + 1;
}

void _inorderTraversal(struct TreeNode* root, int* PIndex, int* a)
{
    if(root != NULL)
    {
          
        
    
        _inorderTraversal(root->left, PIndex, a);
        a[(*PIndex)++] = root -> val;
        _inorderTraversal(root->right, PIndex, a);
    }
    
}

int* inorderTraversal(struct TreeNode* root, int* returnSize) 
{
    *returnSize = TreeSize(root);
    int* a = (int*) malloc(sizeof(int) * *returnSize);
    int Index = 0;
    _inorderTraversal(root, &Index, a);
    return a;
}

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
bool isSameTree(struct TreeNode* p, struct TreeNode* q) 
{
    if(p == NULL && q == NULL)
        return true;
    else if(p != NULL && q != NULL)
    {
        if(p->val == q->val 
           && isSameTree(p->right, q->right)
           && isSameTree(p->left, q->left)
          )
            return true;
    }
    else
        return false;
    return false;
        
}