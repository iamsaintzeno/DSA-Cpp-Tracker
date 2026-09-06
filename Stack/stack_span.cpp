#include<iostream>
#include<vector>
#include<stack>
using namespace std;

vector<int> span(vector<int>& price){
    vector<int> ans;
    stack<int> s ;
    for (int i = 0; i < price.size(); i++)
    {
        while (s.size()>0 && price[s.top()]<=price[i])
        {
            s.pop();
        }
        if(s.size()==0) ans.push_back(i+1) ;
        else {
            ans.push_back(i-s.top());
        }
        s.push(i);
    }
    return ans ;
    
}
                 
int main() {
    vector<int> num = {100,80,60,70,60,75,85} ;
    vector<int> ans = span(num);
    for(auto val : ans){
        cout << val << " " ;
    }       
    return 0;
}