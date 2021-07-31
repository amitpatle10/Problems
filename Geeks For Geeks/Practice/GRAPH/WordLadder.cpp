/* 

Tried doing it with backtracking but it fails because dfs wont give you the correct shortest Path 
hence we use BFS to find the shortest path 

*/ 



int wordLadderLength(string startWord, string targetWord, vector<string>& wordList) {
        // Code here
        queue<string>q; 
        q.push(startWord);
        int count = 0; 
        
        set<string>check; 
        for (auto x: wordList){
            if (x==startWord)continue;
            check.insert(x);
        }
        
        while(!q.empty()){
            
            int size = q.size(); 
            while(size--){
                string temp = q.front();
                if (temp == targetWord){
                    return count + 1; 
                }
                for (int i = 0; i < temp.size(); i ++){
                    for (char c = 'a'; c <= 'z'; c++){
                        if (c == temp[i])continue;
                        string p = temp; 
                        p[i] = c;
                        if (check.find(p) != check.end()){
                            q.push(p);
                            auto it = find(check.begin(),check.end(),p);
                            check.erase(it);
                        }
                    }
                }
                q.pop();
                
            }
            count++;
            
        }
        return 0;
    }