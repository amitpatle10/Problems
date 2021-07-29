/* 

In this problem basically instead of using delete root 
we can return only whats correct 
so if root -> data is less than minvalue 
we can return root -> right because root -> left 
will obviously less than the min
similar for the the greater than max condition



*/


class Solution {
    public:
    Node* removekeys(Node* root, int l, int r) {
        // code here
        if (!root)return NULL;
        
        int data = root -> data;
        
        root -> left = removekeys(root->left , l, r);
        root -> right = removekeys(root->right, l, r);
        
        if (data < l){
            
            return root->right;
            
        }
        if ( data > r ){
            
            return root->left;
            
        }
        
        
        return root;
        
    }
};