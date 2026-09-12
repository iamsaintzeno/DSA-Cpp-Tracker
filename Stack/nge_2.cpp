#include<iostream>
#include<vector>
#include<stack>
using namespace std;

class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n,-1) ;
        stack<int> s;
        for(int i = n*2-1 ; i >= 0 ; i--){
            int currIdx = i%n ;
            while(s.size()>0 && s.top()<=nums[currIdx]){
                s.pop();
            }
            if(i<n){
                if(!s.empty()){
                    ans[currIdx] = s.top(); 
                }
            }
            s.push(nums[currIdx]);
        }
        return ans ;
    }
};
                 
int main() {
    vector<int> arr = {1,2,3,4,3};
    Solution s ;
    vector<int> ans = s.nextGreaterElements(arr);
    for(int val : ans){
        cout << val << " " ;
    }        
    cout << endl ;
    return 0;
}