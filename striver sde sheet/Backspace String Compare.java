class Solution {
    public boolean backspaceCompare(String s, String t) {
        boolean flag = true;
     Stack<Character> s1 = new Stack<Character>();
        Stack<Character> s2 = new Stack<Character>();
       for(char ch1: s.toCharArray()){
           if(ch1=='#' && !s1.empty()) s1.pop();
           
           else if(ch1!='#') s1.push(ch1);
         
           
       }
         for(char ch2: t.toCharArray()){
           if(ch2=='#' && !s2.empty()) s2.pop();
           
           else if(ch2!='#') s2.push(ch2);
        
       }
        if(s1.size()!=s2.size()){
            flag = false;
            return flag;
        }
        while(s1.empty()==false){
            if(s1.peek()==s2.peek()){
                s1.pop();
                s2.pop();
            }
            else{
                flag = false;
                break;
            }
        }
        return flag;
        
        
    }
}
