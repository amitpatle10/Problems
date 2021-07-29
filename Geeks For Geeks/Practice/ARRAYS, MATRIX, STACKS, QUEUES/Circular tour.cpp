int tour(petrolPump p[],int n)
{
    //Your code here
    int start = 0; 
    int end = 0;
    int petrol = 0; 
    queue<int>q;
    for (int i = 0; i < 2*n; i++){
        q.push((i)%n);
        
        if (q.size()==n+1){
            return q.front();
        }
        
        petrol += p[(i)%n].petrol - p[(i)%n].distance;
        
        while(!q.empty() && (petrol < 0)){
            petrol -= (p[q.front()].petrol - p[q.front()].distance);
            q.pop();
        }
        
    }
    return -1;
}