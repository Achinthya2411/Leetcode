class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int temp=-1;
        bool check=false;
       for(int i = 0; i < nums.size(); i++){
           if(nums[i]==target){
               temp=i;
               check=true;
               break;
           }
       }
        if(check==false){
            vector<int> b = {-1, -1};
            return b;
        }
        int start = temp;
        int end = temp;
        for(int i = temp+1; i < nums.size(); i++){
            if(nums[i]==nums[start]){
                end++;
            }
        }
        
        vector<int> a = {start, end};
        return a;
    }
};