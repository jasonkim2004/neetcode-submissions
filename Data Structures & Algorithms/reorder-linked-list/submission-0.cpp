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
    void reorderList(ListNode* head) {
        vector<ListNode*> listVector{};
        ListNode* L = head;
        while (L != NULL) {
            listVector.push_back(L);
            L = L->next;
        }

        head = listVector[0];
        L = head;
        for(int i = 0 ; i<listVector.size()/2 + listVector.size()%2; i++) {
            if (i != listVector.size() - 1 - i){ // odd
                L->next = listVector[listVector.size() - 1 - i];
                L = L->next;
            } else{
                L->next = nullptr;
                break;
            }
            if (i != listVector.size() - 2 - i){ // even
                L->next = listVector[i+1];
                L = L->next;
            } else {
                L->next = nullptr;
                break;
            }
        }

        return;
    }
};
