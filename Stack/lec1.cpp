// ### using vector
// #include<iostream>
// #include<vector>
// using namespace std;

// class Stack {
//   vector<int> v ;
// public :

//     void push(int val){
//         v.push_back(val);
//     }

//     void pop(){
//         v.pop_back() ;
//     }

//     int top(){
//         return v[v.size()-1] ;
//     }

//     bool empty(){
//         return v.size() == 0 ;
//     }

//     void print(){
//         for(auto val : v){
//             cout << val << " " ;
//         }
//     }
    

// };
                 
// int main() {
//     Stack s ;
//     s.push(10);
//     s.push(20);
//     s.push(30);
//     while (!s.empty())
//     {
//         cout << s.top() << " ";
//         s.pop();
//     }
//     cout << endl ;
//     return 0;
// }

// ### using array 

// #include<iostream>
// #include<vector>
// using namespace std;

// class Stack {
//     int* stackArray ;
//     int capacity ;
//     int topIdx ;
// public :
//     Stack(int val){
//         capacity = val ;
//         stackArray = new int[capacity];
//         topIdx = -1 ;
//     }

//     void push(int val){
//         if (topIdx>=capacity-1)
//         {
//             cout << "stack overFlow" << endl ;
//         }
//         stackArray[++topIdx] = val ;
        
//     }

//     int pop(){
//         if(empty()){
//             cout << "stack is empty" << endl ;
//         }
//         return stackArray[topIdx--];
//     }

//     int top(){
//         if (empty())
//         {
//             cout << "Stack is Empty" << endl ;
//         }
//         return stackArray[topIdx];
        
//     }

//     bool empty(){
//         return topIdx == -1 ;
//     }
    

// };
                 
// int main() {
    // Stack s(3) ;
    // s.push(10);
    // s.push(20);
    // s.push(30);
    // while (!s.empty())
    // {
    //     cout << s.top() << " ";
    //     s.pop();
    // }
    // cout << endl ;
    // return 0;
// }

// ### using LL

// #include<iostream>
// #include<list>
// using namespace std;

// class Stack {
//     list<int> ll ;
// public :

//     void push(int val){
//         ll.push_front(val);
//     }

//     void pop(){
//         ll.pop_front();
//     }

//     int top(){
//         return ll.front();
//     }

//     bool empty(){
//         return ll.size() == 0 ;
//     }
    

// };
                 
// int main() {
//     Stack s ;
//     s.push(10);
//     s.push(20);
//     s.push(30);
//     while (!s.empty())
//     {
//         cout << s.top() << " ";
//         s.pop();
//     }
//     cout << endl ;
          
//     return 0;
// }

// stack using stl ;

#include<iostream>
#include<stack>
using namespace std;
                 
int main() {
    stack<char> s ;
    string real = "naman";
    for (int i = 0; i < real.size(); i++)
    {
        s.push(real[i]);
    }
    
    string reverse ;
    while (!s.empty())
    {
        reverse+=s.top();
        s.pop();
    }
    if(reverse==real){
        cout << "Palindrome" << endl ;
    }
    else {
        cout << "Not an Palindrome" << endl ;
    }
    return 0;
}