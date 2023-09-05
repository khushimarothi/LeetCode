/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        if(!head) return nullptr;
        
       Node* ori = head;
       Node* clone = nullptr;
       Node* temp = nullptr;
       
       while(ori){
           temp = new Node(ori->val);
           temp->next = ori->next;
           ori->next = temp;
           ori = temp->next;           
           }
        
        ori = head;
        Node* newHead = head->next;
        
        while(ori){
            if(ori->random){
                ori->next->random = ori->random->next;
                
            }
            else{
                ori->next->random = nullptr;
            }
            ori = ori->next->next;
        }
        
        ori = head;
        while(ori){
            temp = ori->next;
            ori->next= temp->next;
            ori = ori->next;
            
            if(ori){
                temp->next = ori->next;
            }
            else{
                temp->next= nullptr;
            }
        }
        
        return newHead;
    }
};