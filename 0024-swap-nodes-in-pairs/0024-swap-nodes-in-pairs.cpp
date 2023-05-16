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
    ListNode* swapPairs(ListNode* head) {
        if(head==nullptr)
            return head;
        if(head->next==nullptr)
            return head;
        ListNode* prev=head, *curr=head->next;
        head = curr;
        ListNode* temp;
        while(curr!=nullptr){
            prev->next = prev->next->next;
            curr->next = prev;
            temp = prev;
            prev = prev->next;
            if(prev!=nullptr)
                curr = prev->next;
            else curr = nullptr;
            if(curr)
                temp->next = curr;
        }
        return head;
    }
};