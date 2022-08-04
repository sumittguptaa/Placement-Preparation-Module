class Solution {
    public int[][] intervalIntersection(int[][] firstList, int[][] secondList) {
        
        List<int[]> res = new LinkedList<>();
        
        int n1=firstList.length,   n2=secondList.length;
        
        int i=0,j=0;
        
        while(i<n1 && j<n2){
            int s1 = firstList[i][0];
            int e1 = firstList[i][1];
            int s2 = secondList[j][0];
            int e2 = secondList[j][1];
            
            if(s1<=s2 && s2 <= e1 || s2 <= s1 && s1 <= e2){
                int s = Math.max(s1, s2);
                int e = Math.min(e1, e2);
                int [] curr= {s, e};
                res.add(curr);
            }
            
            if(e2 > e1){
                i++;
            }else j++;
        }
        return res.toArray(new int[res.size()][2]);
        
    }
}
