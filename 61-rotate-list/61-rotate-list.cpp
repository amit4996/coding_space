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
    
    
    ListNode* rotateRight(ListNode* head, int k) {
        if(head==NULL || head->next==NULL) return head;
        ListNode* curr=head;
        int n=1;
        while(curr->next)
        {
          curr=curr->next;
          n++;
        }
        k=k%n;
        
        curr->next=head;
        ListNode* d1=head;
        while(n-k-1)
        {
            d1=d1->next;
            n--;
        }
        ListNode* newhead=d1->next;
        d1->next=NULL;
        return newhead;
    }
};