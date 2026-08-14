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
    
    ListNode* lNode = head;
    ListNode* backNode = new ListNode;
    backNode->val = -1;
    backNode->next = head;

    ListNode* fast;
    ListNode* slow;
    fast = backNode;
    slow = backNode;

    for (int i = 0; i < n; i++){
        fast = fast->next;
    }

    while (fast->next != NULL){
        fast = fast -> next;
        slow = slow -> next;
    }
    if (slow->next != NULL)
        printf("%d\n", slow->val);

    slow->next = (slow->next)->next;

    ListNode* answer = backNode->next;
    delete backNode;
    return answer;
    }
};
