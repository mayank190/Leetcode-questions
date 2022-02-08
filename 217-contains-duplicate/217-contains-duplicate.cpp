class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        int k=nums.size();
        map<int,int> m;
        for(int i=0;i<k;i++){
            m[nums[i]]++;
        }
        for(auto pr: m){
            if(pr.second>1)
                return true;
        }
        return false;
    }
};