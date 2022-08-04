/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        ListNode *fastp;
        ListNode *slowp;
        fastp=head;
        slowp=head;
        if(head==NULL || head->next==NULL)
            return false;
        while(fastp->next && fastp->next->next){  //this loop will run until next of fastp or next to next of fastp is null in case there's no loop
            slowp=slowp->next;
            fastp=fastp->next->next;
            if(fastp==slowp)
                return true;
        }
        return false;
    }
};
