#include<iostream>
#include<vector>
#include<stack>
using namespace std;

class Solution
{
public:
    int celebrity(vector<vector<int>> &M){
        stack<int> s ;
        int n = M.size();
        for (int i = 0; i < n ; i++)
        {
            s.push(i);
        }
        while (s.size()>1)
        {
            int i = s.top() ; s.pop() ;
            int j = s.top() ; s.pop() ;

            if (M[i][j] == 0)
            {
                s.push(i) ;
            }
            else {
                s.push(j);
            }
            
        }
        int cele = s.top() ;
        for (int i = 0; i < n; i++)
        {
            if(i==cele) continue;
            if (M[i][cele] == 0 || M[cele][i] == 1)
            {
                return -1 ;
            }
            
        }
        return cele ; 
        
    }
};
                 
int main() {
    vector<vector<int>>arr = { {0, 1, 1, 0}, {0, 0, 0, 0}, {1, 1, 0, 0}, {0, 1, 1, 0}};
    Solution s ;
    cout << s.celebrity(arr);
    return 0;
}