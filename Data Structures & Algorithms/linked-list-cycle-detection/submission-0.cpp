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
    bool hasCycle(ListNode* head) {
        ListNode* next;
        unordered_set<ListNode*> hashmap;


        while(head) {
            if (hashmap.count(head))
                return true;
            hashmap.insert(head);
            head = head->next;
        }
        return false;
    }
};
