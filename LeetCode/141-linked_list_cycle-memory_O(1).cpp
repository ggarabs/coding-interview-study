/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
// Solved in fev 26 2024
class Solution { // Two pointeis - Time O(n) - Space O(1)
public:
    bool hasCycle(ListNode* head) {
        ListNode *slow = head, *fast = head;

        while(fast != NULL && fast->next != NULL){
            fast = fast->next->next;
            slow = slow->next;
            if(fast && fast == slow) return true;
        }

        return false;
    }
};