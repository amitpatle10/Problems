
/*

Using the stack according to the values ...Easy observation

*/


class Solution
{
    public:
    //Function to return a list of integers denoting the node 
    //values of both the BST in a sorted order.
    
    void insert(Node*root,stack<Node*>&s){
        while (root){
            s.push(root);
            root = root -> left;
        }
    }
    
    vector<int> merge(Node *root1, Node *root2)
    {
       //Your code here
       vector<int>ans;
       stack<Node*>a;
       stack<Node*>b;
       insert(root1,a);
       insert(root2,b);
       while (!a.empty() || !b.empty()){
           int check_a = INT_MAX;
           int check_b = INT_MAX;
           if (!a.empty()){
               check_a = a.top()->data;
           }
           if (!b.empty()){
               check_b = b.top()->data;
           }
           if (check_a<=check_b){
               ans.push_back(check_a);
               Node* t = a.top();
               a.pop();
               insert(t->right,a);
           }
           else{
               ans.push_back(check_b);
               Node* t = b.top();
               b.pop();
               insert(t->right,b);
           }
       }
       return ans;
       
       
       
    }
};