class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int countm[256];
        int countr[256];
        for(int i=0;i<256;i++){
            countm[i]=0;
            countr[i]=0;
        }
        
        
        for(int i=0;i<ransomNote.size();i++){
            countr[ransomNote[i]]=countr[ransomNote[i]]+1;
        }
        for(int i=0;i<magazine.size();i++){
            countm[magazine[i]]=countm[magazine[i]]+1;
        }
        for(int i=0;i<256;i++){
            if(countr[i]>0){
//char c=countr[i];
                //cout<<c;
                if(countr[i]>countm[i]) return false;
            }
        } 
        
        return true;    
    }
};
