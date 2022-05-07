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
        ListNode *temp=head;
        int k = 0;
        while(temp!=NULL){
            temp=temp->next;
            k++;
        }
   
        if(n == k )
            return head->next;
        k = k-n;
        temp=head;
        
        ListNode *res = temp;
        while(k>1){   
            cout<<temp->val<<" ";
            temp=temp->next;
            k--;
            
        }
        temp->next = temp->next->next;
        return res;
    }
};