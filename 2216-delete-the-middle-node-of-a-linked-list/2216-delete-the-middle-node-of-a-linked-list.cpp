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
    ListNode* deleteMiddle(ListNode* head) {
       if(head == NULL || head->next == NULL){
        return NULL;
       }

       ListNode* fastptr = head;
       ListNode* slowptr = head;
       ListNode* prev = NULL;

       while(fastptr != NULL && fastptr->next != NULL){
        fastptr = fastptr->next->next;
        prev = slowptr;
        slowptr = slowptr->next;
       }
       prev->next = slowptr->next;
       return head;
    }
};