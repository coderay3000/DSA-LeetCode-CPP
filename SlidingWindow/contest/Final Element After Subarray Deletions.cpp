class Solution {
public:
    int finalElement(vector<int>& nums) {
        int n=nums.size();
        vector<int>k=nums;

        if(n==1) return nums[0];
        if(n==2) return max(nums[0],nums[1]);

        return max(nums[0],nums[n-1]);
        
    }
};