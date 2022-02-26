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
    ListNode* middleNode(ListNode* head) {
        ListNode *slow=head;
        ListNode *fast = head;
        while(fast!=NULL && fast->next!=NULL ){
            slow = slow->next;
            fast = fast->next->next;
        }
        return slow;
        // int c=0;
        // ListNode* temp = head;
        // while(head!=NULL){
        //     head=head->next;
        //     c++;
        // }
        // c = c/2;
        // while(c--){
        //     temp = temp->next;
        // }
        // return temp;
    }
};