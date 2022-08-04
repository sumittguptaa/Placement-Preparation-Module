class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int k=0,l=0;
        for(int i=0;i<nums.size();i++){
            for(int j=i+1;j<nums.size();j++){
                if((nums[i]+nums[j])==target){
                    k=i;
                    l=j;
                    break;
                }
                    
            }
        }
        return {k,l};
    }
};
