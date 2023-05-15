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
    ListNode* swapNodes(ListNode* head, int k) {
        ListNode *temp = head;
        vector<int> v;
        while(temp){
            v.push_back(temp->val);
            temp = temp->next;
        }
        int n = v.size();
        swap(v[k-1], v[n-k]);
        head = new ListNode(v[0]);
        ListNode* ptr = head;
        for(int i=1; i<n; i++){
            ListNode* temp2 = new ListNode(v[i]);
            ptr->next=temp2;
            ptr=ptr->next;
        }
        return head;
    }
};