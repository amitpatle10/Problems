info largest(Node* root){
    if (!root){
        return {0,INT_MIN,INT_MAX,0,true};
    }
    else if (!root->left && !root->right){
        return {1,root->data,root->data,1,true};
    }
    info left = largest(root->left);
    info right = largest(root->right);
    info ret;
    ret.size = 1+left.size+right.size;
    if (left.isbst && right.isbst && root->data > left.max_val && root->data < right.min_val){
        ret.min_val = min(left.min_val,min(right.min_val,root->data));
        ret.max_val = max(right.max_val,max(left.max_val,root->data));
        ret.ans = ret.size;
        ret.isbst = true;
        
    }
    else {
        ret.isbst = false;
        ret.ans = max(left.ans,right.ans);
        ret.max_val = INT_MIN;
        ret.min_val = INT_MAX;
    }
    return ret;
    
    
}
int largestBst(Node *root)
{
	//Your code here
	info x = largest(root);
	return x.ans;
	
}