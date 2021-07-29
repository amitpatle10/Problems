/*


*/


// This function should return head to the DLL
class Solution
{
    public: 
    //Function to convert binary tree to doubly linked list and return it.
    
    Node* prev  = NULL;
    
    void solve (Node * root , Node** head){
        if (root == NULL)return ;
        
        
        solve(root->left,head);
        if (prev == NULL){
            *head = root;
        }
        else{
            root->left = prev;
            prev->right = root;
            
        }
        prev = root;
        solve(root->right,head);
    }
    Node * bToDLL(Node *root)
    {
        // your code here
        
        Node* head = NULL;
        solve(root,&head);
        
        
        return head;
        
        
    }
};