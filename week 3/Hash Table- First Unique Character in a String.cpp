class Solution {
public:
    int firstUniqChar(string s) {
        int a[256];
        for(int i=0;i<256;i++){
            a[i]=-1;
        }
        for(int i=0;i<s.size();i++){
            if(a[s[i]]==-1)
                a[s[i]]=i;
            else
                a[s[i]]=-2;
        }
       int pos=INT_MAX;
        for(int i=0;i<256;i++){
            if(a[i]>=0){
                pos=min(pos,a[i]);
                
            }
            
        }
        if(pos==INT_MAX) return -1;
        return pos;
    }
};
