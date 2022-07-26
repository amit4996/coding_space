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
    ListNode* helper(ListNode*  head,int k,int &times){
        if(times<=0) return head;
        times--;
        ListNode* curr=head;
        
        ListNode* prev=NULL;
        ListNode* next=NULL;
         int count=0;
        while(curr!=NULL && count<k)
        {
            next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
            count++;
        }
       
        if(next!=NULL)head->next=helper(next,k,times);
        return prev;
    }
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode* curr=head;
        int cnt=0;
        while(curr)
        {
            curr=curr->next;
            cnt++;
        }
        int times=cnt/k;
        return helper(head,k,times);
    }
};