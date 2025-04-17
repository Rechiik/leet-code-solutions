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
        ListNode* headNode = new ListNode(0,head);
        ListNode* slow = headNode;
        ListNode* fast = headNode;
        int count = 0;
        while (fast!=NULL){
            if(count>n){
                slow = slow->next;
            }
            fast = fast->next;
            count++;
        }
        slow->next = slow->next->next;
        return headNode->next;
    }
};
