/*
In this as we want to swap the nodes data we can store it in the two respective nodes 
and later then we can swap there values 


Node1 store the previous node 
Node2 store the latest node 


And simple order does the task


*/

class Solution {
public:

   
   
    
    void solve(Node* &root , Node* &prev, Node* &node1, Node* &node2 ){
        if (!root)return;
        
        solve(root->left, prev, node1, node2);
        
        if (prev && root->data < prev->data){
            if (!node1){
                node1 = prev;
                
            }
            node2 = root;
        }
        
        prev = root;
        solve(root->right, prev, node1, node2);
    }
    
    void correctBST( struct Node* root )
    {
        // add code here
        Node* prev = NULL;
        Node* node1 = NULL;
        Node* node2 = NULL;
        solve(root,prev,node1,node2);
        swap(node1->data, node2->data);
        

    }
};