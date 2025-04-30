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
    int countEle(ListNode *head) {
        int cnt = 0;
        ListNode *temp = head;
        while (temp != NULL) {
            cnt++;
            temp = temp->next;
        }
        return cnt;
    }
    ListNode* middleNode(ListNode* head) {
        int cnt = countEle(head);
        if (cnt == 1) return head;
        int mid = cnt/2 +1;
        int k = 1;
        ListNode *temp = head;
        while (temp) {
            if (k == mid) return temp;
            else {
                k++;
                temp = temp->next;
            }
        }
        return head;
        
    }
};