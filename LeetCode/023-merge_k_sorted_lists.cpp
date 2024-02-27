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
// solved in fev 27 2024
class Solution { // Heap - Time O(n*log n) - Space O(n)
public:
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        ListNode *aux = new ListNode(), *ans = aux;

        priority_queue <int, vector<int>, greater<int>> heap;

        for(int i = 0; i < (int)lists.size(); i++){
            ListNode *it = lists[i];
            while(it != NULL){
                heap.push(it->val);
                it = it->next;
            }
        }

        while(!heap.empty()){
            aux->next = new ListNode(heap.top());
            aux = aux->next;
            heap.pop();
        }

        return ans->next;
    }
};