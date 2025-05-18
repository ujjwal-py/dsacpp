/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
public: 
    int listLength(ListNode *head) {
        int cnt = 0;
        ListNode *temp = head;
        while(temp) {
            cnt++;
            temp = temp->next;
        }
        return cnt;

    }
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        int lenA = listLength(headA);
        int lenB = listLength(headB);
        ListNode *tempA = headA;
        ListNode *tempB = headB;
        if (lenA > lenB) {
            int diff = lenA - lenB;
            int pos = 0;
            while (pos != diff) {
                tempA = tempA->next;
                pos++;
            }
        }
        else if (lenA < lenB) {
            int diff = lenB - lenA;
            int pos = 0;
            while (pos != diff) {
                tempB = tempB->next;
                pos++;
            }
        }
        while (tempA && tempB) {
            if (tempA == tempB) return tempA;
            tempA = tempA ->next;
            tempB = tempB -> next;
        }
        return nullptr;
    }
};