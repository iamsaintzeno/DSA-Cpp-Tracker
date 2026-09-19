#include<iostream>
#include<vector>
#include<stack>
using namespace std;
                 
class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        int n = asteroids.size();
        stack<int> s ;
        for(int asteroid : asteroids){
            bool destroyed = false ;
            while (s.size()>0 && s.top()>0 && asteroid < 0)
            {
                if (s.top() < -asteroid)
                {
                    // stack astro explode
                    s.pop();
                }
                else if (s.top()==-asteroid)
                {
                    // both explode 
                    s.pop();
                    destroyed = true ;
                    break ;
                }
                else{
                    // current explode
                    destroyed = true ;
                    break ;
                }
                
            }
            if (!destroyed)
            {
                s.push(asteroid);
            }
        }

        vector<int> ans(s.size());
        for (int i = ans.size()-1; i >= 0; i--)
        {
            ans[i] = s.top();
            s.pop() ;
        }
        return ans ;    
    }
};

int main() {
    vector<int> arr = {5,10,-5};
    Solution s ;
    vector<int> ans = s.asteroidCollision(arr);
    for(int val : ans){
        cout << val << " " ;
    }   
    return 0;
}