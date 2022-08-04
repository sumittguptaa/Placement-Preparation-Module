class Solution {
public:
    char repeatedCharacter(string s) {
        char final;
        vector<int>count(256,0);
        for(int i=0;i<s.size();i++){
            count[s[i]]=count[s[i]]+1;
            if(count[s[i]]==2){
                final=s[i];
                break;
            }
        }
        return final;
    }
};