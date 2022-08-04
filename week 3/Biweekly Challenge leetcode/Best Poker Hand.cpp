class Solution {
public:
    string bestHand(vector<int>& ranks, vector<char>& suits) {
        int count=0,n=suits.size();
        for(int i=1;i<n;i++){
            if(suits[i]==suits[i-1]) count++;
            else break;
        }
        if(count>=n-1) return "Flush";
        n=ranks.size();
        count=1;
        int maxc=1;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(ranks[i]==ranks[j]) count++;
                //else if(count==3) return "Three of a Kind";
                    } 
            if(count>=3) return "Three of a Kind";
            if(count==2) return "Pair";\
            
           count=1;
        }
        return "High Card";
    }
        
};