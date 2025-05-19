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
    ListNode *reverseLL(ListNode *head) {
        ListNode *curr = head, *Next = nullptr,*back = nullptr;
        while (curr) {
            Next = curr->next;
            curr->next = back;
            back = curr;
            curr = Next;
        }
        return back;
    }
    ListNode *kthNode(ListNode *temp, int k) {
        k -= 1;
        while (temp && k > 0) {
            k--;
            temp = temp->next;
        }
        return temp;
    }
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode *temp = head;
        ListNode *prevLast = nullptr;
        while (temp) {
            ListNode *kNode = kthNode(temp, k);
            if (kNode == nullptr) {
                if (prevLast) prevLast->next = temp;
                break;
            }
            ListNode *nextNode = kNode->next;
            kNode->next = nullptr;
            reverseLL(temp);
            if (temp == head) {
                head = kNode;
            } else {
                prevLast->next = kNode;
            }
            prevLast = temp;
            temp = nextNode;
        }
        return head;
        
    }
};