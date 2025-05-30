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
    // int countEle(ListNode *head) {
    //     int cnt = 0;
    //     ListNode *temp = head;
    //     while (temp != NULL) {
    //         cnt++;
    //         temp = temp->next;
    //     }
    //     return cnt;
    // }
    ListNode* middleNode(ListNode* head) {
        if (head->next == nullptr) return head;
        ListNode *slow = head;
        ListNode *fast = head;

        while (fast && fast->next) {
            slow = slow->next;
            fast = fast->next->next;
        }
        return slow;
        
    }
};