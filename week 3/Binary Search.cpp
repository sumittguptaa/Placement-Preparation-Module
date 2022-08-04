class Solution {
public:
    int search(vector<int>& nums, int target) {
        int high=nums.size()-1;
        int low;
        int mid;
        for(low=0;low<=high;low++)
        {    
            mid=(low+high)/2;
        if(target==nums[mid]){
           return mid;
           // break;
        }
        else if(target>nums[mid]){
            low=mid+1;
        }
        else if(target<nums[mid]) {
            high=mid-1;
        }
       // if(low>=high){
        //     mid=-1;
        // }
            
        }
    //  if(target==nums[mid]) 
        return -1;
     
    }
};
