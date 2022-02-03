class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();
        int m = 0;
        int i =0, j = n-1;
        while(i<j){
            int vol = (j-i)*(min(height[i], height[j]));
            m = max(vol, m);
            if(height[i]<height[j]){
                i++;
            }
            else{
                j--;
            }
        }
        return m;
    }
};