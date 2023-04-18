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
    ListNode* reverseList(ListNode* head) {
        ListNode* prev = nullptr;               //points to the previous element
        ListNode* curr = head;                  //points to current element
        while(curr!=nullptr){                   //while curr points to an element
            ListNode* next = curr->next;        //points to the next node
            curr->next = prev;                  //the curr node's next becomes, prev
            prev = curr;                        //prev now points to curr
            curr = next;                        //curr now points to next
        }                   //finally at last, curr node points to the nullptr
        return prev;        //prev points to the last element, I mean the first element
    }
};