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
    ListNode* rotateRight(ListNode* head, int k) {
        if(head == NULL || k == 0 || head->next == NULL)
            return head;
        
        ListNode *temp = head;
        int a =0;
        while(temp->next != NULL){
            a++;
            temp=temp->next;
        }
        k = k%(a+1);
        temp->next = head;
        ListNode *curr =head;
        for(int i=0;i<a-k;i++)
            curr= curr->next;
        head = curr->next;
        curr->next = NULL;
        return head;
    }
};