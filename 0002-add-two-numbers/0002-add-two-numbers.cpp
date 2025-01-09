class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        // Dummy head to simplify the code
        ListNode* dummyHead = new ListNode(0);
        ListNode* current = dummyHead;
        int carry = 0;

        // Loop through both lists
        while (l1 != nullptr || l2 != nullptr) {
            // Get the current values, if the node is null use 0
            int x = (l1 != nullptr) ? l1->val : 0;
            int y = (l2 != nullptr) ? l2->val : 0;
            int sum = carry + x + y;

            // Update carry for next calculation
            carry = sum / 10;
            // Create a new node with the digit value of sum % 10
            current->next = new ListNode(sum % 10);
            // Move current pointer
            current = current->next;

            // Move to the next nodes in l1 and l2
            if (l1 != nullptr) l1 = l1->next;
            if (l2 != nullptr) l2 = l2->next;
        }

        // Check if there is any carry left
        if (carry > 0) {
            current->next = new ListNode(carry);
        }

        // Return the next of dummyHead which is the actual start of the result list
        return dummyHead->next;
    }
};