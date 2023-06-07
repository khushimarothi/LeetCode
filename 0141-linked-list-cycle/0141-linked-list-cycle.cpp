/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        
        ListNode* first = head, *sec = head;
         
        while( sec != NULL && sec->next != NULL){
             first = first->next;
             sec = sec->next->next;
            
            if(sec == first) return true;
         }
        return false;
    }
};