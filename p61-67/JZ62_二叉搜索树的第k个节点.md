//中序遍历第k个节点即可
```c
/*
struct TreeNode {
    int val;
    struct TreeNode *left;
    struct TreeNode *right;
    TreeNode(int x) :
            val(x), left(NULL), right(NULL) {
    }
};
*/
class Solution {
public:
    int index=0;
    TreeNode* KthNode(TreeNode* pRoot, int k)
    {
        if(pRoot!=NULL){
            auto node=KthNode(pRoot->left,k);
            if(node!=NULL) return node;
            index++;
            if(index==k) return pRoot;
            node = KthNode(pRoot->right,k);
            if(node!=NULL)return node;
        }
        return NULL;
    }  
};
```
//迭代
```c

/*
struct TreeNode {
    int val;
    struct TreeNode *left;
    struct TreeNode *right;
    TreeNode(int x) :
            val(x), left(NULL), right(NULL) {
    }
};
*/
class Solution {
public:
    TreeNode* KthNode(TreeNode* root, int k)
    {
        if(root==NULL || k==0) return NULL;
        stack<TreeNode*> s;
        int count=0;
        TreeNode* node=root;
        while(node || !s.empty()){
            if(node){
                s.push(node);
                node=node->left;
            }else{
                node=s.top();s.pop();
                count++;
                if(count==k) return node;
                node=node->right;
            }
        }
        return NULL;
    }
};
```
