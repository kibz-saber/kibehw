#include <bits/stdc++.h>
using namespace std;
class MyQueue {
public:
    stack<int>f;
    stack<int>t;
    MyQueue() {
        
    }
    
    void push(int x) {
        f.push(x);
    }
    
    int pop() {
        if(t.empty()==true){   
        while(f.empty()!=true){
            t.push(f.top());
            f.pop();
        }
        int k=t.top();
        t.pop();
        return k;
        }
        else{
            int w=t.top();
            t.pop();
            return w;
        }
        
    }
    
    int peek() {
        if(t.empty()==true){   
        while(f.empty()!=true){
            t.push(f.top());
            f.pop();
        }
        
        return t.top();
        }
        return t.top();
        
    }
    
    bool empty() {
        if(t.empty()==true &&f.empty()==true){
            return true;
        }
        return false;
        
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */