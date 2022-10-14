/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* deleteMiddle(ListNode* head) {
        ListNode *temp = head;
        int res = 0 ;
        while(temp != NULL){
            res++;
            temp = temp->next;
        }
        res = res / 2;
        if(res==0)
            return head->next;
        ListNode *nx = head;
        for(int i=0;i<res-1;i++)
            nx = nx->next;
        nx->next = nx->next->next;
        return head;
        
    }
};