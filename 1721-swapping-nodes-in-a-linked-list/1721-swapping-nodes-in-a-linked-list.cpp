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
    ListNode* swapNodes(ListNode* head, int k) {
        ListNode *temp =head;
        ListNode *curr =head;
        ListNode *curr1 =head;
        int m=0 ;
        while(temp!=NULL){
            m++;
            temp=temp->next;
        }
        int p = m-k;
        while(k>1){
            curr=curr->next;
            k--;
        }
        
        while(p>0){
            curr1=curr1->next;
            p--;
        }
        cout<<curr->val<<" "<<curr1->val;
        swap(curr->val , curr1->val);
        return head;
    }
};