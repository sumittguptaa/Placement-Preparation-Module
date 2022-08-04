class Solution {
public:
    int firstBadVersion(int n) {
        long mid=0,left = 1;
        long right = n;
        long bv = 1;
        while(left<= right){
            mid = (left+right)/2;
            if(isBadVersion(mid)){
                bv = mid;
                right = mid-1;
            }
            else left = mid+1;

        }
            
        return bv;
    }
};
