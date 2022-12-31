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
     ListNode*temp=head;
        int ct=k;
        ListNode* res1=head;
        ListNode* res2=head;
        
        while(ct--){
            res1=temp;
            temp=temp->next;
            
        }
        while(temp!=NULL){
            temp=temp->next;
            res2=res2->next;
        }
        swap(res1->val,res2->val);
        return head;
    }
};