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

/*givet tree is BST or not */
//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
#define MAX_HEIGHT 100000

// Tree Node
struct Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};




// } Driver Code Ends
class Solution
{
    public:
    //Function to check whether a Binary Tree is BST or not.
    bool isBSTUtil(Node *root, int min, int max)
    {
        if(root==NULL)
        return 1;
        if(root->data <min || root->data > max )
        return 0;
        cout<<"min : "<<min <<" Max: "<<max<<endl;
        return isBSTUtil(root->left, min,root->data-1) && isBSTUtil(root->right, root->data+1, max);
    }
        
    bool isBST(Node* root) 
    {
       //Node *prev=NULL;
       return isBSTUtil(root, INT_MIN, INT_MAX);
    }
};

/*Array to BST*/

//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
#define MAX_HEIGHT 100000

// Tree Node
struct Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};




// } Driver Code Ends
class Solution
{
    public:
    //Function to check whether a Binary Tree is BST or not.
    bool isBSTUtil(Node *root, int min, int max)
    {
        if(root==NULL)
        return 1;
        if(root->data <min || root->data > max )
        return 0;
        cout<<"min : "<<min <<" Max: "<<max<<endl;
        return isBSTUtil(root->left, min,root->data-1) && isBSTUtil(root->right, root->data+1, max);
    }
        
    bool isBST(Node* root) 
    {
       //Node *prev=NULL;
       return isBSTUtil(root, INT_MIN, INT_MAX);
    }
};

/*largest value in a level of Tree*/
class Solution
{
    public:
    void helper(vector <int> &res, Node *root, int d)
    {
        if(root==NULL)
        return;
        if(d==res.size())
        res.push_back(root->data);
        else
        {
            res[d]=max(res[d], root->data);
        }
        
        helper(res, root->left, d+1);
        helper(res, root->right, d+1);
    }
    
    vector<int> largestValues(Node* root)
    {
        vector<int> res;
        helper(res, root, 0);
        return res;
        //code here
    }
};


/*Zig Zag traversal of the tree*/
vector<int> zigZagTraversal(Node* root) {
    if(root == NULL){return {  } ; }
 
    vector<int > ans ;
    queue<Node*> q ;
    q.push(root) ;
    bool flag = false ;
 
    while(!q.empty()){
        int size = q.size() ;
        vector<int> level ;
        for(int i=0 ; i < size ; i++){
            Node* node = q.front() ;
            q.pop() ;
            level.push_back(node->data) ;
 
            if(node->left != NULL) {q.push(node->left) ;}
            if(node->right != NULL) {q.push(node->right) ;}   
 
        }
        flag = !flag ;  
        if(flag == false){
            reverse(level.begin() , level.end()) ;           
        }
        for(int i = 0 ; i < level.size() ; i++){
          ans.push_back(level[i]) ;
        }
         
    }
    return ans ;
}
