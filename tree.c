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
