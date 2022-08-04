class Solution {
    public List<List<Integer>> subsets(int[] nums) {
        List<List<Integer>> ls = new ArrayList();
        generateSubset(0,nums,new ArrayList(),ls);
        return ls;
    }
    void generateSubset(int index,int[] nums,List<Integer> curr,List<List<Integer>> ls){
        ls.add(new ArrayList(curr));
        for(int i=index;i<nums.length;i++){
            curr.add(nums[i]);
            generateSubset(i+1,nums,curr,ls);
            curr.remove(curr.size()-1);
        }
    }
}