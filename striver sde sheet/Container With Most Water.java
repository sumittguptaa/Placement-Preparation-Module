class Solution {
    public int maxArea(int[] heigth){
        int max_area = 0;
        int a_pointer = 0;
        int b_pointer = heigth.length-1;
        
        while(a_pointer < b_pointer){


            if(heigth[a_pointer] < heigth[b_pointer]){


                max_area =  Math.max(max_area , 

(b_pointer-a_pointer)*heigth[a_pointer]);
                a_pointer +=1;
            }

            else{
                max_area = Math.max(max_area , (b_pointer 

- a_pointer) * heigth[b_pointer]);
                b_pointer -=1;

            }
        }
        return max_area;
    }}
