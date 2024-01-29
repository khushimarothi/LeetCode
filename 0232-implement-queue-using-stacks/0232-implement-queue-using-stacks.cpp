class MyQueue {
public:
    stack<int> first;
    stack<int> sec;
    
    MyQueue() {
        
    }
   
    void push(int x) {
        
        while(!sec.empty())
        {
            first.push(sec.top());
            sec.pop();
        }
        
        first.push(x);
    }
    
    
    int pop() {
        
        while(!first.empty())
        {
            sec.push(first.top());
            first.pop();
        }
        
        int res = sec.top();
        sec.pop();
        return res;
    }
    
 
    int peek() {
        
        while(!first.empty())
        {
            sec.push(first.top());
            first.pop();
        }
        
        int res = sec.top();
        return res;
    }
    
    bool empty() {
        return (first.empty() && sec.empty());
    }
};

