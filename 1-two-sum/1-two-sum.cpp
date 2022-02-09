class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

 vector<int> v;
        int i;
        int s=nums.size();
        for(i=0;i<s;i++){
            for(int j=i+1;j<s;j++){
                int sum=nums[i]+nums[j];
                if(target==sum){
                    v.push_back(i);
                    v.push_back(j);
                    break;
                }
            }
        }
        return v;
}
};
