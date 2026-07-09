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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(!head) return head;
        int length = 0;
        ListNode* node = head;
        while(node){
            node = node->next;
            length++;
        }
        int target = length - n - 1;
        if(target == -1){
            return head->next;
        }
        node = head;
        while(target > 0){
            node = node->next;
            target--;
        }
        ListNode* nxt = node->next;
        ListNode* nxtToNxt = nxt->next;
        node->next = nxtToNxt;
        nxt->next = nullptr;
        return head;
    }
};
