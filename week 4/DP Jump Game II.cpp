class Solution {
public:
    
    int traveling(vector<int>&nums,int index,vector<int>&dp){
	//base case
        if(index==nums.size()-1){
            return 0;
        }
        //base case
        if(index>=nums.size()){
            return 10000+1;
        }
		//memorization
        if(dp[index]!=-1) return dp[index];
        
        int temp = 10000+1;
		//getting minimum
        for(int i=1;i<=nums[index];i++){
            temp = min(temp,1+traveling(nums,index+i,dp));
        }
        //returning minimum answer
        return dp[index] = temp;
        
    }
    
    int jump(vector<int>& nums) {
        //if size is 1
        if(nums.size()==1){
            return 0;
        }
		//memorization
        vector<int>dp(nums.size(),-1);
		
        return traveling(nums,0,dp);
    }
};
