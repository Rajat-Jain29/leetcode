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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
       ListNode *temp = new ListNode();
       ListNode  *res = temp;
        int s = 0 , c=0;
       while(l1!=NULL || l2!=NULL){
           int x = l1 != NULL? l1->val : 0;
           int y = l2 != NULL? l2->val : 0;
           s = c + x+y;
           c = s/10;
           res->next = new ListNode(s%10);
           res = res->next;
            if(l1!=NULL)
               l1=l1->next;
            if(l2!=NULL)
               l2=l2->next;
       } 
        if(c > 0){
            res->next = new ListNode(c);
        }
        return temp->next;
    }
};