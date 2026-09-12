// bruit force 
// #include<iostream>
// #include<vector>
// using namespace std;

// class Solution {
// public:
//     int largestRectangleArea(vector<int>& arr) {
//         int maxArea = 0 ;
//         for(int i = 0 ; i < arr.size() ; i++){
//             int minHeight = INT_MAX ;
//             for(int j = i ; j < arr.size() ; j++){
//                 minHeight = min(arr[j],minHeight) ;

//                 int width = j - i +1 ;
//                 int area = minHeight*width ;

//                 maxArea = max(area,maxArea);
//             }
//         }
//         return maxArea ;
        
//     }
// };
                 
// int main() {
//     vector<int> heights = {2,1,5,6,2,3};
//     Solution s ;
//     cout << s.largestRectangleArea(heights);
            
//     return 0;
// }


// #include<iostream>
// #include<vector>
// #include<stack>
// using namespace std;

// class Solution {
// public:
//     int rse(vector<int>& arr , int x){
//         stack<int> s ;
//         int n = arr.size();
//         vector<int> ans(n);
//         for (int i = n-1 ; i >= 0; i--)
//         {
//             while (s.size()>0 && arr[s.top()]>arr[i])
//             {
//                 s.pop();
//             }
//             if (s.size()==0)
//             {
//                 ans[i] = n ;
//             }
//             else{
//                 ans[i] = s.top();
//             }
            
//             s.push(i);
//         }
//         return ans[x];
//     }
//     int lse(vector<int>& arr , int x){
//         stack<int> s ;
//         int n = arr.size();
//         vector<int> ans(n);
//         for (int i = 0 ; i < n ; i++)
//         {
//             while (s.size()>0 && arr[s.top()]>arr[i])
//             {
//                 s.pop();
//             }
//             if (s.size()==0)
//             {
//                 ans[i] = -1 ;
//             }
//             else{
//                 ans[i] = s.top();
//             }
            
//             s.push(i);
//         }
//         return ans[x];
//     }
//     int largestRectangleArea(vector<int>& arr) {
//         int maxArea = 0 ;
//         for(int i = 0 ; i < arr.size() ; i++){
//             int r = rse(arr,i);
//             int l = lse(arr,i);
//             int area = arr[i]*(r-l-1);
//             maxArea = max(area,maxArea);
//         }
//         return maxArea ;
        
//     }
// };
                 
// int main() {
//     vector<int> heights = {2,1,5,6,2,3};
//     Solution s ;
//     cout << s.largestRectangleArea(heights);
            
//     return 0;
// }


#include<iostream>
#include<vector>
#include<stack>
using namespace std;

class Solution {
public:
    int largestRectangleArea(vector<int>& arr) {
        int maxArea = 0 ;
        int n = arr.size();
        vector<int> right(n);
        vector<int> left(n);
        stack<int> s ;
        for (int i = n-1; i >= 0 ; i--)
        {
            while (s.size()>0 && arr[s.top()]>=arr[i])
            {
                s.pop();
            }
            if (s.size()==0)
            {
                right[i] = n ;
            }
            else {
                right[i] = s.top();
            }
            s.push(i);
        }
        while(!s.empty()) s.pop() ;

        for (int i = 0 ; i < n ; i++)
        {
            while (s.size()>0 && arr[s.top()]>=arr[i])
            {
                s.pop();
            }
            if (s.size()==0)
            {
                left[i] = -1 ;
            }
            else {
                left[i] = s.top();
            }
            s.push(i);
        }

        
        for(int i = 0 ; i < arr.size() ; i++){
            int r = right[i];
            int l = left[i] ;
            int area = arr[i]*(r-l-1);
            maxArea = max(area,maxArea);
        }
        return maxArea ;
        
    }
};
                 
int main() {
    vector<int> heights = {2,1,5,6,2,3};
    Solution s ;
    cout << s.largestRectangleArea(heights);
            
    return 0;
}