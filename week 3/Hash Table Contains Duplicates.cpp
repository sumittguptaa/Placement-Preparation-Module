class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        for(long i=0;i<nums.size()-1;i++){
            if(nums[i]==nums[i+1])
                return true;
            // else
            //     return false;
        }
        return false;
    }
};
