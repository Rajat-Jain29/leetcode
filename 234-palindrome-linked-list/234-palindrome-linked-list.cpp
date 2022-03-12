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
    bool palin(vector<int> & p){
        int l = 0;
        int r = p.size()-1;
        while(l<r){
            if(p[l] != p[r])
                return false;
            l++;
             r--;
        }
        return true;
    }
    bool isPalindrome(ListNode* head) {
        vector<int> p;
        if(head == NULL)
            return true;
        while(head!=NULL){
            p.push_back(head->val);
            head=head->next;
        }
            return palin(p);
//         ListNode *z=head;
//         vector<int> p,q;
//         while(head!=NULL){
//             p.push_back(head->val);
//             head=head->next;
//         }
//          ListNode *temp = NULL;
//         while(z!=NULL){
//             ListNode *nx = z->next;
//             z->next=temp;
//             temp=z;
//             z=nx;
            
//         }
//          while(temp!=NULL){
//             q.push_back(temp->val);
//             temp=temp->next;
//         }
//         return p==q;
        
        // for(int i=0;i<p.size();i++){
        //     if(p[i]!=q[i])
        //         return false;
        // }
        // return true;
       
    }
};