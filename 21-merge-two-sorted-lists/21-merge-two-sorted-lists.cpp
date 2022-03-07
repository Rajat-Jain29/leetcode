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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        vector<int> p;
        while(l1 != NULL){
            p.push_back(l1->val);
            l1=l1->next;
        }
        while(l2 != NULL){
            p.push_back(l2->val);
            l2=l2->next;
        }
        sort(p.begin(),p.end());
        ListNode *head , *temp = NULL ;
        for(int i=0;i<p.size();i++){
            ListNode *newNode = new ListNode();
            newNode->val = p[i];
            newNode->next = NULL;
            if(head == NULL){
                head = newNode;
                continue;
            }
            
           temp = head;
            while(temp->next != NULL)
                temp=temp->next;
            
            temp->next = newNode;
                
        }
        return head;
        
        
    }
};