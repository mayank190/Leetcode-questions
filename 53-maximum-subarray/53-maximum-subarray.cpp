class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int save=nums[0];
        int ans=save;
        for(int i=1;i<nums.size();i++){
            save=max(save+nums[i],nums[i]);
            ans=max(save,ans);
        }
        return ans;
    }
};