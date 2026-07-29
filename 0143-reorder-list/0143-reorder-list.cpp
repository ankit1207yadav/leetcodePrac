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
    ListNode* reverseLL(ListNode* head) {
        if(head == NULL || head->next == NULL)
            return head;

        ListNode* last = reverseLL(head->next);
        head->next->next = head;
        head->next = NULL;

        return last;
    }

    void reorderList(ListNode* head) {

        if(head == NULL || head->next == NULL)
            return;

        ListNode* slow = head;
        ListNode* fast = head;

        while(fast->next && fast->next->next){
            slow = slow->next;
            fast = fast->next->next;
        }

        ListNode* rev = reverseLL(slow->next);
        slow->next = NULL;

        ListNode* curr = head;

        while(rev){

            ListNode* temp1 = curr->next;
            ListNode* temp2 = rev->next;

            curr->next = rev;
            rev->next = temp1;

            curr = temp1;
            rev = temp2;
        }
    }
};