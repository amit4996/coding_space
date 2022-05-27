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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int temp=0;
        int carry=0;
        int sum=0;
        ListNode *head=new ListNode();
        ListNode *curr=head;
        while(l1!=NULL && l2!=NULL)
        {
            temp=(l1->val+l2->val)+carry;
            sum=temp%10;
            carry=temp/10;
            ListNode *temp=new ListNode(sum);
            curr->next=temp;
            curr=temp;
            l1=l1->next;
            l2=l2->next;
        }
        while(l1!=NULL)
        {
            temp=(l1->val)+carry;
            sum=temp%10;
            carry=temp/10;
            ListNode *temp=new ListNode(sum);
            curr->next=temp;
            curr=temp;
            l1=l1->next;
        }
        while(l2!=NULL)
        {
            temp=(l2->val)+carry;
            sum=temp%10;
            carry=temp/10;
            ListNode *temp=new ListNode(sum);
            curr->next=temp;
            curr=temp;
            l2=l2->next;
        }
        if(carry)
        {
            curr->next= new ListNode(carry);
        }
        return head->next;
        
        //         int temp=0;
        // int carry=0;
        // int sum=0;
        // ListNode *head=new ListNode();
        // ListNode *curr=head;
        // while(l1!=NULL || l2!=NULL)
        // {
        //     int x=(l1!=NULL)?l1->val:0;
        //     int y=(l2!=NULL)?l2->val:0;
        //     temp=x+y+carry;
        //     sum=temp%10;
        //     carry=temp/10;
        //     ListNode *temp=new ListNode(sum);
        //     curr->next=temp;
        //     curr=temp;
        //     if(l1!=NULL)l1=l1->next;
        //     if(l2!=NULL)l2=l2->next;
        // }
        // if(carry)
        // {
        //     curr->next=new ListNode(carry);
        // }
        // return head->next;
    }
};