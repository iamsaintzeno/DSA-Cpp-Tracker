// #include<iostream>
// #include<vector>
// #include<stack>
// using namespace std;

// class Solution {
// public:
//     int trap(vector<int>& height) {
//         int n = height.size();
//         int units = 0 ;
//         for (int i = 0; i < n; i++)
//         {
//             int leftmax = 0;
//             int rightmax = 0;
//             for (int j = 0; j < i; j++)
//             {
//                 leftmax = max(leftmax,height[j]);
//             }
//             for (int j = i+1; j < n; j++)
//             {
//                 rightmax = max(rightmax,height[j]);
//             }

//             int boundry = min(rightmax,leftmax);
//             if (boundry > height[i]) {
//                 units += boundry - height[i];
//             }
//         }
//         return units ;
//     }
// };
                 
// int main() {
//     vector<int> nums = {0,1,0,2,1,0,1,3,2,1,2,1};
//     Solution s ;
//     cout << "Ans : " << s.trap(nums);        
//     return 0;
// }

// #include<iostream>
// #include<vector>
// #include<stack>
// using namespace std;

// class Solution {
// public:
//     int trap(vector<int>& height) {
//         int n = height.size();
//         int units = 0 ;
//         vector<int> right(n) ;
//         vector<int> left(n) ;

//         left[0] = height[0] ;
//         right[n-1] = height[n-1] ;
//         for (int i = 1; i < n; i++)
//         {
//             left[i] = max(left[i-1],height[i]) ;
//         }

//         for (int i = n-2; i >= 0 ; i--)
//         {
//             right[i] = max(right[i+1],height[i]) ;
//         }

//         for (int i = 0; i < n; i++)
//         {
//             int boundary = min(left[i],right[i]);
//             units += boundary-height[i];
//         }
//         return units ;
//     }
// };
                 
// int main() {
//     vector<int> nums = {4,2,0,3,2,5};
//     Solution s ;
//     cout << "Ans : " << s.trap(nums);        
//     return 0;
// }

#include<iostream>
#include<vector>
#include<stack>
using namespace std;

class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        int l = 0 ;
        int r = n-1 ;
        int ans = 0 ;
        int lmax = 0 ;
        int rmax = 0 ;
        while (l<r)
        {
            lmax = max(lmax,height[l]);
            rmax = max(rmax,height[r]);

            if (lmax<rmax)
            {
                ans += lmax-height[l];
                l++;
            }
            else{
                ans += rmax-height[r];
                r--;
            }
            
        }
        return ans ;
    }
};
                 
int main() {
    vector<int> nums = {0,1,0,2,1,0,1,3,2,1,2,1};
    Solution s ;
    cout << "Ans : " << s.trap(nums);        
    return 0;
}