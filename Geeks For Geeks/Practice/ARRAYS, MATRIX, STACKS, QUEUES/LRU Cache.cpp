/*

head  <----> node1 <-----> node2 <-----> tail



*/



class LRUCache    
{
    private:

    public:
    

    class node {      // Making doubly Linked List for Optimised Value setting function
        public:
        int key;
        int value;
        node* prev = NULL;
        node* next = NULL;
        node(int _key, int _value){
            key = _key;
            value = _value;
        }
    };
    
    
    node* head = new node(-1, -1);      
    node* tail = new node(-1, -1);

    int capacity;    //capacity of the cache

    map<int,node*>check;   // O(1) value retrival (most optimised getting function)
    
    //Constructor for initializing the cache capacity with the given value.
    LRUCache(int cap)
    {
        capacity = cap;
        head -> next = tail; 
        tail -> prev = head;
        
    }


    /* 

    Add node works in following way : 

    We want to add temp node
    Intial List is head <----> node1 <----> node2 <-----> tail
    Final list is head <----> temp <-----> node1 <-----> node2 <-----> tail

    */ 
    void addnode ( node* temp ){
        node* dummy = head -> next ; 
        head -> next = temp; 
        temp -> prev = head;
        temp -> next = dummy;
        dummy -> prev = temp;
    }

    /* 

    Delete Node works in following manner: 
    We want to delete the temp node 
    Initial List = head <----> node1 <----> temp <-----> node2 <-----> tail
    Final List = head <----> node1 <-----> node2 <-----> tail


    */ 
    void deletenode ( node* temp ){
        node* next_node = temp -> next; 
        node* prev_node = temp -> prev;
        next_node -> prev = prev_node;
        prev_node -> next = next_node;
    }
    
    
    
    //Function to return value corresponding to the key.

    /* 
    Working of get function 

    Condition if the required value is present: 
        We store the node which has the required value
        Delete The node And again add that node 
        Intital list = head <----> node1 <----> temp <-----> node2 <-----> tail 
        Final list = head <----> temp <-----> node1 <-----> node2 <-----> tail 
        This because In LRU the latest paged request is added in front of the cache 
        Finally we return the required value

    Condition if value is not present we simply return -1;

    */
    int get(int key)
    {
        // your code here
        if (check.find(key) != check.end()){
            node* found_node = check[key];
            int ans = found_node -> value;
            deletenode (found_node);
            addnode (found_node);
            check[key] = head -> next;
            return ans;
        }
        else {
            return -1;
        }
        
    }
    
    //Function for storing key-value pair.

    /* 


    Working of Set function 

    lets say we want to set the key (key) with value (value)

    Conditon if value is present in the cache
    Delete the found node 
    Add it again because it is latest paging request 

    Conditon if capacity is full 
    We Delete the Least recently used (LRU) that is tail key from the cache 


    Finally we add the and set the requested value






    */
    void set(int key, int value)
    {
        // your code here  
        if (check.find(key) != check.end()){
            node* found_node = check[key];
            check.erase(key);
            deletenode(found_node);
        }
        if (check.size() == capacity){
            check.erase(tail -> prev -> key);
            deletenode(tail -> prev);
        }
        addnode(new node(key, value));
        check[key] = head -> next;
    }
};
