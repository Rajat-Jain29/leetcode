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
    // bool palin(vector<int> & p){
    //     int l = 0;
    //     int r = p.size()-1;
    //     while(l<r){
    //         if(p[l] != p[r])
    //             return false;
    //         l++;
    //          r--;
    //     }
    //     return true;
    // }
    ListNode* rev(ListNode *head){
        ListNode *temp = NULL;
        while(head!=NULL){
            ListNode *nx = head->next;
            head->next = temp;
            temp=head;
            head=nx;
        }
        return temp;
    }
    bool isPalindrome(ListNode* head) {
        // vector<int> p;
        // if(head == NULL)
        //     return true;
        // while(head!=NULL){
        //     p.push_back(head->val);
        //     head=head->next;
        // }
        //     return palin(p);
       
        
        ListNode *slow = head;
        ListNode *fast =head;
        while(fast->next != NULL && fast->next->next != NULL){
            slow = slow->next;
            fast=fast->next->next;
        }
        slow->next = rev(slow->next);
        slow=slow->next;
        
        while(slow != NULL){
            if(head->val != slow->val)
                return false;
            slow=slow->next;
            head=head->next;
        }
        return true;
       
    }
};