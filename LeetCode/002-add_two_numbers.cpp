// Resolvido em 26/01/2024
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
class Solution { // Linked List & Math - Time O(n) - Space O(n)
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode *vet = new ListNode();
        ListNode *ans = vet;

        int carry = 0;
        while(l1 != nullptr || l2 != nullptr){
            int sum = (l1 == nullptr ? 0 : l1->val) + (l2 == nullptr ? 0 : l2->val) + carry;
            carry = sum/10;
            vet->next = new ListNode(sum%10);
            vet = vet->next;
            if(l1) l1 = l1->next; 
            if(l2) l2 = l2->next;
        }

        if(carry) vet->next = new ListNode(carry);

        ans = ans->next;

        return ans;
    }
};