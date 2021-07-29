


class Solution{
    public:
    /*The function takes an array of heights, width and 
    length as its 3 arguments where each index i value 
    determines the height, width, length of the ith box. 
    Here n is the total no of boxes.*/
    
    struct Box{
        int l;
        int h;
        int w;
        
    };
    struct compare{
        bool operator ()(struct Box a,struct Box b){
            return ((a.w*a.l)>(b.w*b.l));
        }
    };
   
    
    int maxHeight(int height[],int width[],int length[],int n)
    {
        //Your code here
        int m = 3*n;
        vector<Box>v(m);
        int pos = 0;
        for (int i=0;i<n;i++){
            v[pos].h = height[i];
            v[pos].w = min(length[i],width[i]);
            v[pos].l = max(length[i],width[i]);
            ++pos;
            v[pos].h = length[i];
            v[pos].w = min(height[i],width[i]);
            v[pos].l = max(height[i],width[i]);
            ++pos;
            v[pos].h = width[i];
            v[pos].w = min(length[i],height[i]);
            v[pos].l = max(height[i],length[i]);
            ++pos;
        }
        sort(v.begin(),v.end(),compare());
        int dp[m];
        for (int i=0;i<m;i++){
            dp[i] = v[i].h;
        }
        int ans = INT_MIN;
        for (int i=1;i<m;i++){
            
            for (int j=0;j<i;j++){
                if ((v[j].w > v[i].w) && (v[j].l > v[i].l) && dp[j]+v[i].h > dp[i]){
                    dp[i] = dp[j] + v[i].h;
                }
            }
            
            ans = max(ans,dp[i]);
        }
        return ans;
        
    }
};
