/*Tree is balanced or not*/
class Solution{
    public:
    //Function to check whether a binary tree is balanced or not.
    bool isBalanced(Node *root)
    {
        if(!root) return 0;
        int lt=isBalanced(root->left);
        int rt=isBalanced(root->right);
        if(lt==-1 || rt==-1)
        return -1;
        if(abs(lt-rt)>1) return -1;
        else
        return max(lt,rt)+1;
        //  Your Code here
    }
};

/*Diameter of the tree*/
#include <limits.h> 
int Max(int a, int b)
{
    if(a>b)
    return a;
    else
    return b;
}

int  height(struct Node *root, int *ans)
{
    if(root==NULL)
    return 0;
    int lh=height(root->left, ans);
    int rh=height(root->right, ans);
    *ans=Max(*ans, lh+rh+1);
    return Max(lh, rh)+1;
}
int diameter(struct Node* root) {
    // code here
    if(root==NULL)
    return 0;
    int ans =INT_MIN;
    int h = height(root, &ans);
    return ans;
}

/*Sum child Parent property*/
class Solution{
    public:
    //Function to check whether all nodes of a tree have the value 
    //equal to the sum of their child nodes.
    int isSumProperty(Node *root)
    {
        int ld, rd;
        // Add your code here
        if(root==NULL || root->left==NULL || root->right == NULL) {
            return 1;
        }
        if(root->left !=NULL)
        ld=root->left->data;
        if(root->right!=NULL)
        rd=root->right->data;
        if((root->data == ld+rd) && isSumProperty(root->left) 
        && isSumProperty(root->right))
     {
         return 1;
     }
    }
};
