class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int a = search(nums, val);
        while(a!=-1){
            for(int i = a; i < nums.size()-1; i++){
                nums[i]=nums[i+1];
            }
            nums[nums.size()-1] = val;
            nums.pop_back();
            a = search(nums, val);
        }
        return nums.size();
    }
    int search(vector<int> &nums, int val){
        for(int i = 0; i < nums.size(); i++){
            if(nums[i]==val){
                return i;
            }
        }
        return -1;
    }
};