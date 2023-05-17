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
        stack<int> s;
        ListNode* temp=slow->next;
        while(temp){
            s.push(temp->val);
            temp = temp->next;
        }
        int sum=0;
        while(!s.empty()){
            int temp_sum = head->val + s.top();
            sum = max(sum, temp_sum);
            head=head->next;
            s.pop();
        }
        return sum;
    }
};