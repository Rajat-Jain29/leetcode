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
//     void merge(ListNode **head){
//         ListNode* first,*second;
//         ListNode *curr = *head;
//         if(!curr || !curr->next)
//             return ;
//         mergehalf(curr,&first,&second);
//         merge(&first);
//         merge(&second);
//         *head = mergeTwo(first,second);    
//     }
    
//     ListNode* mergeTwo( ListNode* first, ListNode *second){
//         ListNode *answer=NULL;
//         if(!first)
//             return second;
//         else if(!second)
//             return first;
        
//         if(first->val <= second->val){
//             answer =first;
//             answer->next = mergeTwo(first->next,second);
//         }
//         else{
//             answer =second;
//             answer->next = mergeTwo(first,second->next);
//         }
//         return answer;
        
//     }
    
//     void mergehalf(ListNode *curr,ListNode **first,ListNode **second){
//         ListNode *slow = curr;
//         ListNode *fast= curr->next;
//         while(fast!=NULL){
//             fast = fast->next;
//             if(fast!=NULL){
//                 slow = slow->next;
//                 fast = fast->next;
//             }
//         }
//         *first = curr;
//         *second = slow->next;
//         slow->next = NULL;
//     }
    
    
    ListNode* sortList(ListNode* head) {
        vector<int> p;
        while(head!=NULL){
            p.push_back(head->val);
            head=head->next;
        }
        sort(p.begin(),p.end());
        ListNode *res = NULL;
         ListNode * temp;
        for(int i=0;i<p.size();i++){
            ListNode *newNode = new ListNode();
            newNode->val = p[i];
            newNode->next=NULL;
            if(res == NULL){
                res = newNode;
                // continue;
                 temp = res;
            }
          else{
            while(temp->next!=NULL){
                temp=temp->next;
            }
            temp->next = newNode;
          }
        }
        return res;
        // merge(&head);
        // return head;
    }
};