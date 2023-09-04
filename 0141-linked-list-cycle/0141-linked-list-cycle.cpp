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
        for(int cnt = 0; head; head = head->next, cnt++)
            if(cnt > 1e4) return true;
        
        return false;
    }
};