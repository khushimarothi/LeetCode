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
    vector<ListNode*> splitListToParts(ListNode* head, int k) {
        if(!head) return vector<ListNode*>(k, nullptr);
        
        ListNode* it = head;
        int cnt = 0;
        while(it){
            cnt++;
            it = it->next;
        }
        
        int n = cnt/k;
        int extra = cnt%k;
        
        vector<ListNode*> ans;
        ListNode* cur = head;
        ListNode* pre = nullptr;
        
        int next = n + (extra > 0 ? 1:0);
        if(extra > 0){
            extra--;
        }
        
        for(int i = 0;i < cnt;i++){
            if(i == next){
                pre->next = nullptr;
                ans.push_back(cur);
                next += n + (extra >0 ? 1 : 0);
                if(extra > 0){
                    extra--;
                }
            }
            pre = cur;
            cur = cur->next;
            if(i == 0){
                ans.push_back(head);
            }
        }
        
        while(ans.size() < k){
            ans.push_back(nullptr);
        }
        return ans;
    }
};