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
    ListNode* mergeNodes(ListNode* head) {
        ListNode* temp = head;
        ListNode* temp1 = temp->next;
        int sum = 0;

        while(temp1 != NULL){
            if(temp1->val == 0){
                temp->next = temp1;
                temp1->val = sum;
                sum = 0;
                temp = temp1;
            }else{
                sum += temp1->val;
            }
            temp1 = temp1->next;
        }
        return head->next;
    }
};