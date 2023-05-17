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
    int pairSum(ListNode* head) {
        ListNode *slow=head, *fast=head->next;
        while(fast->next!=nullptr){
            slow = slow->next;
            fast = fast->next->next;
        }
        ListNode* head2 = nullptr, *curr = slow->next;
        // slow->next=null;
        while(curr!=nullptr){
            ListNode* next = curr->next;
            curr->next = head2;
            head2 = curr;
            curr = next;
        }
        int sum=0;
        while(head2){
            int temp_sum = head->val + head2->val;
            sum = max(sum, temp_sum);
            head=head->next;
            head2=head2->next;
        }
        return sum;
    }
};