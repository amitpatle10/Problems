/*
In this problem we try to get basically the max of sum of left and right subtree 
we return the max sum of left and right subtree 
We need to face the following conditions to get assured of getting max sum in between the 2 leaf nodes 
1. if node is leaf we can return its data directly 
2. if both left and right subtree exists we try to get max from both the end and add it to the root->data
3. if only left subtree exists we try to get max till we reach the leaf node 
4. Same for right subtree if it alone exists 

if (!root->left || !root->right){
    return max ( ans , solve(root,...rest));

}


This condition we have put up to solve if from the root itself the left or right subtree
is not present because condition given was (Here Leaf node is a node which is connected to exactly one different node)






            



*/


class Solution {
public:
    int solve (Node* root, int &ans){
        if (!root)return 0;
        if (!root -> left && !root -> right){
            return root -> data;
        }
        
        if (root->right && root->left){
            int d = root -> data;
            int l  = solve(root->left,ans);
            int r = solve(root->right,ans);
            ans = max(ans, l + r + d);
            return max(l,r) + d;
        }
        if (root->left)return root->data + solve(root->left,ans);
        if (root->right)return root->data + solve(root->right,ans);
        
        
    }
    
    int maxPathSum(Node* root)
    {
        // code here
        int ans = INT_MIN;
        int f = solve(root, ans);
        if (!root->left || !root->right){
            return max(ans,f);
        }
        
        return ans;
    }
};