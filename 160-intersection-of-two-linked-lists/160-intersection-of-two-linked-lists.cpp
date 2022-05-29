/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode* d1=headA;
        ListNode* d2=headB;
        while(d1!=d2)
        {
           d1!=NULL?d1=d1->next:d1=headB;
           d2!=NULL?d2=d2->next:d2=headA;
        }
        return d1;
    }
};