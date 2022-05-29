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
    ListNode *detectCycle(ListNode *head) {
    //     ListNode *p=head;
    //     ListNode *q=head;
    //     if(head==NULL || head->next==NULL) return NULL;
    //     while(p!=NULL && q!=NULL && q->next!=NULL)
    //     {
    //         p=p->next;
    //         q=q->next->next;
    //         if(p==q)
    //         {
    //             break;
    //         }
    //     }
    //     q=head;
    //     while(p!=NULL && q!=NULL)
    //     {
    //         if(p==q)
    //         {
    //           return p;  
    //         }
    //         else
    //         {
    //             p=p->next;
    //             q=q->next;
    //         }
    //     }
    //     return NULL;
    // }
        if(head==NULL || head->next==NULL) return NULL;
        ListNode* slow=head;
        ListNode* fast=head;
         int flag=0;
        while(fast->next!=NULL && fast->next->next!=NULL)
        {
            slow=slow->next;
            fast=fast->next->next;
            if(slow==fast) 
            {
                flag=1;
                break;
            }
        }
        if(flag==0)return NULL;
       slow=head;
        while(slow!=fast)
        {
            slow=slow->next;
            fast=fast->next;
        }
        return slow;
    }
};