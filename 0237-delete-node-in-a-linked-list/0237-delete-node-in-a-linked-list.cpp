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
    void deleteNode(ListNode* node) {
        ListNode* newNode = node->next; ListNode* prev=node;
        
        while(newNode!=NULL) {
            node->val = newNode->val;
            prev=node;
            node=node->next;
            newNode=newNode->next;
        }
        prev->next=NULL;
    }
};