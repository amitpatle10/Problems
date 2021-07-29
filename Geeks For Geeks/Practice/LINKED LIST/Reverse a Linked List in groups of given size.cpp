
/* 

Use stack to reverse the list 


*/

class Solution
{
    public:
    struct node *reverse (struct node *head, int k)
    { 
        // Complete this method
        stack<node*>st;
        node* prev = NULL;
        node* cur = head;
        while(cur){
            int count = k;
            while (cur && count--){
                st.push(cur);
                cur = cur -> next;
            }
            
            
                while (st.size()){
                    if (prev == NULL){
                        prev = st.top();
                        head = prev;
                        st.pop();
                        
                    }
                    else{
                        prev -> next = st.top();
                        st.pop();
                        prev = prev->next;
                    }
                }
            
        }
        prev->next = NULL;
        return head;
    }
};