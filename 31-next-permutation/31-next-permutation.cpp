class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int temp = 0;
        for(int i = nums.size()-2; i>=0; i--){
            if(nums[i]<nums[i+1]){
                int j = minimum(i, nums);
                swap(nums[i], nums[j]);
                reverseArray(nums, i+1, nums.size()-1);
                temp++;
                break;
            }
            //if(nums[i]<nums[i+1]&&i==0){
              //  reverseArray(nums, 0, nums.size()-1);
               // temp++;
            //}
        }
        if(temp==0){
            reverseArray(nums, 0, nums.size()-1);
        }
    }
    int minimum(int index,vector<int> &nums){
        for(int i=nums.size()-1; i>index; i--){
            if(nums[i]>nums[index]){
                return i;
            }
        }
        return -1;
    }
    void reverseArray(vector<int> &arr, int start, int end)
    {
        while (start < end)
        {
            int temp = arr[start];
            arr[start] = arr[end];
            arr[end] = temp;
            start++;
            end--;
        }
    }
};