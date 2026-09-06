// bruit force 

// #include<iostream>
// #include<vector>
// using namespace std;

// vector<int> nextGreaterElement(vector<int> &nums1, vector<int> &nums2)
// {
//     vector<int> ans;
//     for (int i = 0; i < nums1.size(); i++)
//     {
//         bool foundInNum2 = false ;
//         bool foundGreator = false ;
//         for (int j = 0; j < nums2.size(); j++)
//         {
//             if(nums1[i]==nums2[j]){
//                 foundInNum2 = true ;

//                 for (int k = j+1; k < nums2.size(); k++)
//                 {
//                     if (nums2[k]>nums2[j])
//                     {
//                         foundGreator = true ;
//                         ans.push_back(nums2[k]);
//                         break ;
//                     }
                    
//                 }
//                 break ;
                
//             }
//         }
//         if (!foundGreator)
//         {
//             ans.push_back(-1);
//         }
//     }
    
//     return ans ;
// }

// int main() {
//     vector<int> nums1 = {4,1,2}   ;  
//     vector<int> nums2 = {1,3,4,2}   ;  
//     vector<int> ans = nextGreaterElement(nums1,nums2)  ; 
//     for(int val : ans){
//         cout << val << " " ;
//     }
//     return 0;
// }

// optimal 
#include<iostream>
#include<vector>
#include<stack>
using namespace std;

vector<int> nextGreaterElement(vector<int> &nums){
    int n = nums.size();
    vector<int> ans(n) ;
    stack<int> s ;
    for(int i = n-1 ; i>=0 ; i--){
        while(s.size()>0 && s.top()<=nums[i]){
            s.pop();
        }
        if (s.size()==0)
        {
            ans[i]=-1;
        }
        else {
            ans[i]=s.top();
        }
        s.push(nums[i]);
        
    }
    return ans ;
}
                 
int main() {
    vector<int> nums = {6,8,0,1,3};
    vector<int> ans = nextGreaterElement(nums);
    for(int val : ans){
        cout << val << " " ;
    }        
    return 0;
}