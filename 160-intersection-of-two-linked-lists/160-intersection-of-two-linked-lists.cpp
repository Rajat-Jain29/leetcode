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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
       if(headA == NULL || headB==NULL)
           return NULL;
        ListNode *l1 = headA,*l2=headB;
        while(l1 != l2){
            l1 = l1==NULL ? headB : l1->next;
            l2 = l2==NULL ? headA : l2->next;
        }
        return l1;
    }
};