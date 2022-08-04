class Solution {
    public ListNode deleteDuplicates(ListNode head) {
        if(head == null || head.next == null) return head;
        ListNode dummy_node = new ListNode(0);
        dummy_node.next = head;
        ListNode curr = dummy_node , temp=head;
        while(temp!=null){
            if(temp.next!=null && temp.val==temp.next.val){
                while(temp.next !=null && temp.val==temp.next.val){
                    temp = temp.next;  }
                curr.next =  temp.next;        }
            else                 curr = temp;
            temp=temp.next;
        }
          
        
        return dummy_node.next;
    }}
