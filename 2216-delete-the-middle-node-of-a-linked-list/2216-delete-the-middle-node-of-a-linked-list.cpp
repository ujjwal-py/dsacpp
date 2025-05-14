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
    ListNode* deleteMiddle(ListNode* &head) {
        if (head->next == nullptr) return nullptr;
        int delInd = nodeCount(head)/2 - 1; //to get the node before the deleted node
        int ind = 0;
        ListNode *temp = head;
        while (temp->next) {
            if (ind == delInd) {
                ListNode *delNode = temp->next;
                temp->next = temp->next->next;
                delete delNode;
                return head;
            }
            temp = temp->next;
            ind++;
        }
        
        return head;
    }
};