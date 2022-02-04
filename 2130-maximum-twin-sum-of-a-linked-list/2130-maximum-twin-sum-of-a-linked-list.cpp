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
    int pairSum(ListNode* head) {
        ListNode *temp = head;
        vector<int> p;
        while(temp!=NULL){
            p.push_back(temp->val);
            temp=temp->next;
        }
        int mx = INT_MIN;
        for(int i=0;i<p.size();i++){
            mx = max(mx,  (p[i] + p[ p.size() - 1 - i ])  );
        }
        return mx;
    }
};