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
    int nodeCount(ListNode *&head) {
        int cnt = 0;
        ListNode *temp = head;
        while (temp) {
            temp = temp->next;
            cnt++;
        }
        return cnt;
    }
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if (nodeCount(head) == n) { // condition for deleteing head
            ListNode *temp = head;
            head = temp->next;
            // temp->next = temp->next->next;
            delete temp;
            return head;
        }
        else if (nodeCount(head) == 1) { //if only one elemenet
            ListNode *temp = head;
            delete temp;
            return head;
        } 
        else {
        int removeInd = (nodeCount(head) -  n); //for one node before the deleting node
        int ind = 1;
        ListNode *temp = head;
        while (temp) {
            if (ind == removeInd) {
                ListNode *tobeDeleted = temp->next;
                temp->next = temp->next->next;
                delete tobeDeleted;
                return head;
            }
            temp = temp->next;
            ind++;
        }
        return head;
        }
        
        
    }
};