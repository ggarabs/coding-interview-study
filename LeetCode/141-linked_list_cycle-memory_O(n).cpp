/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
//Solved in fev 26 2024
class Solution { // Hash table - Time O(n) - Space O(n)
public:
    bool hasCycle(ListNode* head) {
        set <ListNode*> list;

        ListNode* it = head;
        
        while(it){
            if(list.find(it) != list.end()) return true;
            list.insert(it);
            it = it->next;
        }

        return false;
    }
};