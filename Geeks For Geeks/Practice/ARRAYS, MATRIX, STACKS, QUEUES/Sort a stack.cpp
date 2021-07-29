void solve(stack<int>&s, int ele){
    
    if (s.empty() || ele > s.top()){
        s.push(ele);
    }
    else{
        int t = s.top();
        s.pop();
        solve(s,ele);
        s.push(t);
    }
    
}
void SortedStack :: sort()
{
   //Your code here
   if (s.empty()){
       return ;
   }
   int top_ele = s.top();
   s.pop();
   
   sort();
   solve(s, top_ele);
   
   
}