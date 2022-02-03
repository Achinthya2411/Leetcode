class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n=nums1.size();
        int m=nums2.size();
        vector<double> nums(n+m);
        merge(nums1.begin(),nums1.end(),nums2.begin(),nums2.end(),nums.begin());
        sort(nums.begin(),nums.end());
        int k=nums.size();
        int mid=k/2;
        double ans;
        if(k%2==0)
        {
            ans=(nums[mid-1]+nums[mid]);
            return ans/2;
        }
        else
            ans=nums[mid];
        return ans;
    }
};