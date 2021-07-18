/*
The Basic Logic is if the target node lets suppose is in left subtree of the 
current node then the time taken would be sum of these two
1. time taken to reach the target node 
2. height of the right subtree





*/


//Best Solution


class Solution {
    public:
    
    int solve(Node* root, int target, int &ans){
        if (!root){
            return 0;
        }
        int l = solve(root->left, target, ans);
        int r = solve(root->right, target, ans);
        
        if (root -> data == target){
            ans = max(ans, max(l,r));
            return -1;
        }
        
        if (l < 0){
            ans = max(ans, -l + r);
            return l - 1;
        }
        if (r < 0){
            ans = max(ans, -r + l);
            return r - 1;
        }
        return 1 + max(l,r);
    }
    
    int minTime(Node* root, int target) 
    {
        // Your code goes here
        int ans = 0; 
        solve(root, target, ans);
        return ans;
    }
};


// Another Solution

struct info{
    int ldept;
    int rdept;
    bool contains;
    int timespent;
    info(){
        ldept = 0;
        rdept = 0;
        timespent = -1 ;
        contains = false;
        
    }

};

class Solution {
    public:
    
    info solve(Node* root , info &card, int &ans, int target){
        if (!root){
            return card;
        }
        if ((!root->left)&&(!root->right)){ 
            if (root -> data == target){
                card.contains = true;
                card.timespent = 0;
            }
            return card;
        }
        info left_info;
        solve (root->left, left_info, ans, target);
        info right_info;
        solve(root->right, right_info, ans, target);
        
        
        card.timespent = (root -> left && left_info.contains)?(left_info.timespent + 1):-1;
        
        if (card.timespent == -1){
            card.timespent = (root -> right && right_info.contains)?(right_info.timespent + 1):-1;
        }
        
        card.contains = ((root->left && left_info.contains)||(root->right && right_info.contains));
        
        card.ldept = (!root->left)?0:(1 + max(left_info.ldept,left_info.rdept) );
        card.rdept = (!root->right)?0:(1 + max(right_info.ldept,right_info.rdept));
        
        
       if (card.contains){
           if (root -> left && left_info.contains){
               ans = max(ans,card.timespent + card.rdept);
           }
           if (root -> right && right_info.contains){
               ans = max(ans,card.timespent + card.ldept);
           }
       }
       
        
        
        
    }
    int minTime(Node* root, int target) 
    {
        // Your code goes here
        int ans = 0;
        info card;
        
        solve(root,card,ans,target);
        
        return ans;
        
    }
};
