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
    ListNode* reverseLL(ListNode *&head) {
    ListNode *prev = nullptr, *curr = head, *Next = head->next;
    while (curr) {
        curr->next = prev;
        prev = curr;
        curr  = Next;
        if (Next == nullptr) Next = nullptr;
        else Next = Next->next;
    }
    return prev;
    }
    int countNodes(ListNode *&head) {
        ListNode *temp = head;
        int cnt = 0;
        while (temp) {
            temp = temp->next;
            cnt++;
        }
        return cnt;
    }
    ListNode *mid(ListNode *&head) {
        ListNode *slow = head, *fast = head;
        while (fast && fast->next) {
            slow = slow->next;
            fast = fast->next->next;
        }
        return slow;
    }

    bool isPalindrome(ListNode* head) {
        if (head->next == nullptr) return true;
        else {
            int nodeCount = countNodes(head);
            ListNode *firstHalf = head;
            ListNode *m = mid(head);
            ListNode* secondHalf = nullptr;
            if (countNodes(head) % 2 == 0) {
                secondHalf = reverseLL(m);
            }
            else {
                secondHalf = reverseLL(m->next);
            }
            while (secondHalf) {
                if (secondHalf->val != firstHalf->val) return false;
                secondHalf = secondHalf->next;
                firstHalf = firstHalf->next;
            }
            return true;
            

            
        }
        
    }
};