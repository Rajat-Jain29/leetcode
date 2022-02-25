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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int k=0;
        
        ListNode *cur = head;
            while(cur!=NULL){
                k++;
                cur=cur->next;
        }
        if(n == k )
            return head->next;
        int g = k-n;
        ListNode *res = head;
        cur = head;
        while(g--){
            res = cur;
            cur=cur->next;
        }
        res->next=cur->next;
        return head;
      }
};