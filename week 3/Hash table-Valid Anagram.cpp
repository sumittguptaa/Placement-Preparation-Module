class Solution {
public:
    bool isAnagram(string s, string t) {
        int n1=s.size();
        int n2=t.size();
        if(n1!=n2) return false;
        int countT[256];
        int countS[256];
        for(int i=0;i<256;i++){
            countT[i]=0;
            countS[i]=0;
        }
        for(int i=0;i<n1;i++){
            countT[t[i]]=countT[t[i]]+1;
            countS[s[i]]=countS[s[i]]+1;
        }
        for(int i=0;i<256;i++){
            if(countT[i]>0){
                if(countT[i]!=countS[i]) return false;
            }
        }
        return true;
    }
};
