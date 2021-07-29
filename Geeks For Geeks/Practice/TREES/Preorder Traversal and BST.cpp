
/*
In this problem we are storing elements in decreasing order in stack

Lets say a element is found greater than the present root we
will pop the elements until it is greater than the top of stack 
The thought process behind this is we are finding to which root 
it can be attached to 
example  -inf(current root) 4 2 1 3 6 5 7 
stack : push(4) pop elements untill stack.top() is smaller (In this stack is empty);
stack : 4 2 1 
Now 3 is also samller than the current root 
So we pop untill 3 is greater than the stack. top()
stack: 4 3 
last popped will be current root because we are attaching 2 with 3 (the right side should always be greater than 2 )
stack: 4 3 (6) ----> stack: 6   (current root will be 4 reason same as above)
stack 6 5 (7)  ----> stack: 7    (current root will be 6 ----""-----)

Observation : How can we store elements in a stack such that we check left side and right side condition of a bst 
Store in dec order (validity for left side)
Check if a greater element has a valid root to get attached to


*/



class Solution {
  public:
    int canRepresentBST(int arr[], int N) {
        // code here
        int check = INT_MIN;
        
        stack <int> st;
        
        for (int i=0;i<N;i++){
            if (check>arr[i]){
                return false;
            }
            
            while(!st.empty() && arr[i]>st.top()){
                check = st.top();
                st.pop();
            }
            
            st.push(arr[i]);
            
        }
        
        return true;
    }
};