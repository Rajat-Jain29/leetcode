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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        if(head == NULL)
           return NULL;
        ListNode *curr = head , *prev = NULL;
        while(left>1){
            prev = curr;
            curr = curr->next;
            left--;
            right--;
        }
        ListNode *start = prev,*tail = curr;
        while(right > 0){
            ListNode *next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
            right --;
        }
        if(start!=NULL){
            start->next = prev;
        }
        else{
           head = prev;
        }
        tail->next = curr;
        return head;
    }
};