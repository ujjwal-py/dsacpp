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
    ListNode* deleteDuplicates(ListNode* head) {
        if (head == NULL) return head;
        else if (head->next == NULL) return head;
        else {
        ListNode *prev = head;
        ListNode *temp = head->next;

        while (temp != NULL) {
            if (prev->val == temp->val) {
                prev->next = temp->next;
                ListNode *d = temp;
                temp = temp->next;
                delete d;
            }
            else {
            prev = temp;
            temp = temp -> next;
            }
        }
        }
        return head;
        
    }
};