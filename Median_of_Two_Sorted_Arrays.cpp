// There is no need to write the header

#include<iostream>
#include<vector>
using namespace std;

// code
class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> nums;
        int nums1length = nums1.size(), nums2length = nums2.size(),i=0,j=0;
        while(i<nums1length && j<nums2length){
            if(nums1[i] < nums2[j]) nums.push_back(nums1[i++]);
            else nums.push_back(nums2[j++]);
        }
        while(i<nums1length){
            nums.push_back(nums1[i++]);
        }

        while(j<nums2length){
            nums.push_back(nums2[j++]);
        }
        int  numsize = nums1length + nums2length; 
        if((numsize)%2 == 1)
        return nums[numsize/2];
        else
        return float(nums[(numsize/2)]+ nums[(numsize/2)-1])/2;
    }
};
