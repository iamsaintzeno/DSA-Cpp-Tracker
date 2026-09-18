// #include<iostream>
// #include<climits>
// #include<vector>
// using namespace std;
                
// class Solution {
// public:
//     int sumSubarrayMins(vector<int>& arr) {
//         int n = arr.size() ;
//         int sum = 0 ;
//         for (int i = 0; i < n; i++)
//         {
//             int minNum = arr[i] ;
//             for (int j = i; j < n; j++)
//             {
//                 minNum = min(minNum , arr[j]) ;
//                 sum += minNum ;
//             }
            
//         }
//         return sum ; 
//     }
// };

// int main(){
//     vector<int> arr = {11,81,94,43,3};
//     Solution s ;
//     cout << s.sumSubarrayMins(arr);
//     cout << endl ;
// }

#include<iostream>
#include<vector>
#include<stack>
using namespace std;

class Solution {
public:

    vector<int> PSE(vector<int> arr){
        int n = arr.size();
        vector<int> ans(n) ;
        stack<int> s ;
        for (int i = 0; i < n; i++)
        {
            while (s.size()>0 && arr[s.top()]>arr[i])
            {
                s.pop();
            }
            if (s.size()==0)
            {
                ans[i] = -1 ;
            }
            else{
                ans[i] = s.top() ;
            }
            
            s.push(i);
        }
        return ans ;
    }
    vector<int> NSE(vector<int> arr){
        int n = arr.size();
        vector<int> ans(n) ;
        stack<int> s ;
        for (int i = n-1; i >= 0 ; i--)
        {
            while (s.size()>0 && arr[s.top()]>=arr[i])
            {
                s.pop();
            }
            if (s.size()==0)
            {
                ans[i] = n ;
            }
            else{
                ans[i] = s.top() ;
            }
            
            s.push(i);
        }
        return ans ;
    }
    int sumSubarrayMins(vector<int>& arr) {
        int n = arr.size() ;
        int total = 0 ;
        int mod = 1e9 + 7;
        vector<int> pse = PSE(arr);
        vector<int> nse = NSE(arr);
        for (int i = 0; i < n; i++)
        {
            int left = i - pse[i] ;
            int right = nse[i] - i ;

            total = (total + (right*left)*arr[i])%mod ;

        }
        return total ;

    }
};

int main(){
    vector<int> arr = {11,81,94,43,3};
    Solution s ;
    cout << s.sumSubarrayMins(arr);
    cout << endl ;
}