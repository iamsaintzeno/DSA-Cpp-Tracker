// #include<iostream>
// #include<stack>
// #include<algorithm>
// using namespace std;

// class MinStack {
// public:
//     stack<pair<int,int>> s ;
//     MinStack() {
        
//     }
    
//     void push(int value) {
//         if(s.empty()){
//             s.push({value,value});
//         }
//         else{
//             int minValue = min(value,s.top().second);
//             s.push({value,minValue});
//         }
//     }
    
//     void pop() {
//         if(!s.empty()){
//             s.pop();
//         }
//     }
    
//     int top() {
//         return s.top().first;
//     }
    
//     int getMin() {
//         return s.top().second ;
//     }
// };
                 
// int main() {
//     MinStack minStack;
//     minStack.push(-2);
//     minStack.push(0);
//     minStack.push(-3);
//     cout << minStack.getMin() << endl; // Output: -3
//     minStack.pop();
//     cout << minStack.getMin() << endl; // Output: -2

//     return 0;
// }
// optimal approach

#include<iostream>
#include<stack>
using namespace std;
                 
class MinStack {
public:
    int minVlaue ;
    stack<int> s ;
    MinStack() {
        
    }
    
    void push(int val) {
        if (s.empty())
        {
            s.push(val);
            minVlaue = val ;
            return ;        
        }
        if (val<minVlaue)
        {
            s.push(2*val-minVlaue);
            minVlaue = val ;
        }
        else{
            s.push(val);
        }   
    }
    
    void pop() {
        if (s.empty())
        {
            return ;
        }
        if (s.top()<minVlaue)
        {
            minVlaue = 2*minVlaue - s.top();
        }
        s.pop() ;  
    }
    
    int top() {
        if(s.empty()) return -1 ;
        if (s.top()<minVlaue)
        {
            return minVlaue;
        }
        
        return s.top();
    }
    
    int getMin() {\
        return minVlaue; 
    }
};

int main() {
    MinStack s ;
    s.push(0);
    s.push(-2);
    s.push(-3);
    cout << s.getMin() << endl;
    s.pop();
    cout << s.getMin() << endl;  
    return 0;
}