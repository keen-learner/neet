/*
Given the head of a linked list, remove the nth node from the end of the list and return its head.

Example 1:
    Input: head = [1,2,3,4,5], n = 2
    Output: [1,2,3,5]

Example 2:
    Input: head = [1], n = 1
    Output: []

Example 3:
    Input: head = [1,2], n = 1
    Output: [1]

Constraints:
    The number of nodes in the list is sz.
    1 <= sz <= 30
    0 <= Node.val <= 100
    1 <= n <= sz
Follow up: Could you do this in one pass?
*/

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
    ListNode* removeNthFromEnd(ListNode* head, int k) {
        if(!head) return head;
        int n = 0;
        ListNode *curr = head;
        while(curr) {++n; curr= curr->next;}
        k = n-k+1;
        int cnt = 0;
        ListNode dummy{0};
        curr = &dummy;
        curr->next = head;
        ListNode *prev = NULL;
        while(cnt !=k ) {
            prev = curr;
            curr = curr->next;
            ++cnt;
        }
        prev->next = curr->next;
        delete curr;
        return dummy.next;
    }
};

class Solution1 {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* fast = head;
        ListNode* prev = NULL;
        for(int i = 0; i<n; i++) {
            fast = fast->next;
        }
        ListNode* slow = head;
        while (fast != NULL) {
            prev = slow;
            slow = slow->next;
            fast = fast->next;
        }
        if(!prev) {
            return head->next;
        }
        prev->next = slow->next;
        return head;
    }
};