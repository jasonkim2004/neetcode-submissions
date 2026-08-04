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
    ListNode* answer = NULL;
    void insertAtHead(int val) {
        ListNode * newNode = new ListNode(val);
        newNode->next = answer;
        answer = newNode;
        return;
    }

    ListNode* reverseList(ListNode* head) {
        
        while (head) {
            insertAtHead(head->val);
            head = head->next;
        }
        return answer;
    }
};
