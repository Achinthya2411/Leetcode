class Solution {
public:
    int search(vector<int>& nums, int target) {
        int h = nums.size()-1;
        int l = 0;
        if(l==h&&nums[l]==target){
            return 0;
        }
        else if(l==h&&nums[l]!=target){
            return -1;
        }
        while(l<=h){
            int mid = (h+l)/2;
            if(target==nums[mid]){
                return mid;
            }
            if(target>nums[mid]){
                l = mid+1;
            }
            if(target<nums[mid]){
                h = mid-1;
            }
        }
        return -1;
    }
};