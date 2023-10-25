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
    ListNode* mergelist(ListNode* list1, ListNode* list2){
        if(!list1) return list2;
        
        if(!list2) return list1;
        
        ListNode* head=list1;
        if(list1->val > list2->val){
            head=list2;
            list2=list2->next;
            
        }
        else{
            list1=list1->next;
        }

        ListNode* curr=head;
        while(list1 && list2){
            if(list1->val < list2->val){
                curr->next=list1;
                list1=list1->next;
            }
            else{
                curr->next=list2;
                list2=list2->next;
            }
            curr=curr->next;
        }
        if(!list1) curr->next=list2;
        else curr->next=list1;
        
        return head;
    }
    ListNode* sortList(ListNode* head) {
        if(head == NULL || head->next == NULL){
            return head;
        }
        
        ListNode *temp = NULL;
        ListNode *slow = head, *fast = head;
        
        while(fast != NULL && fast->next != NULL){
            temp = slow;
            slow = slow->next;
            fast = fast->next->next;

        }
        temp->next = NULL;
        
        ListNode *d1 = sortList(head);
        ListNode *d2 = sortList(slow);
        
        return mergelist(d1, d2);
        
        
    }
};