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
    ListNode* mergeTwoLists(ListNode* &list1, ListNode* &list2) {
    if (list1 == nullptr && list2 == nullptr) return list1;
    ListNode *temp = list1;
    ListNode *ttemp = list2;
    ListNode *ans = new ListNode();
    ListNode *ansTemp = ans;
    // vector<int> ans;
    while (temp && ttemp) {
        if (temp->val <= ttemp->val) {
            // ans.push_back(temp->val);
            ListNode *ansNode = new ListNode(temp->val);
            ansTemp->next = ansNode;
            ansTemp = ansTemp-> next;
            temp = temp->next;
        }
        else {
            // ans.push_back(ttemp->val);
            ListNode *ansNode = new ListNode(ttemp->val);
            ansTemp->next = ansNode;
            ansTemp = ansTemp-> next;
            ttemp = ttemp->next;
        }
    }
    while (temp) {
        // ans.push_back(temp->val);
        ListNode *ansNode = new ListNode(temp->val);
        ansTemp->next = ansNode;
        ansTemp = ansTemp-> next;
        temp = temp->next;
    }
    while (ttemp) {
        // ans.push_back(ttemp->val);
        ListNode *ansNode = new ListNode(ttemp->val);
        ansTemp->next = ansNode;
        ansTemp = ansTemp-> next;
        ttemp = ttemp->next;
    }

    return ans->next;
    }   
};