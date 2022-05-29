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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* l1=list1;
        ListNode* l2=list2;
        if(l1==NULL && l2!=NULL) return l2;
        if(l2==NULL && l1!=NULL) return l1;
        if(l1==NULL && l2==NULL) return NULL;
        ListNode* head=new ListNode();
        ListNode* curr=head;
        // if(l1->val<=l2->val)
        // {
        //     ListNode* temp=new ListNode(l1->val);
        //     head->next=temp;
        //     curr=temp;
        //     l1=l1->next;
        // }
        // else
        // {
        //     ListNode* temp=new ListNode(l2->val);
        //     head->next=temp;
        //     curr=temp;
        //     l2=l2->next;
        // }
        while(l1!=NULL && l2!=NULL)
        {
            if(l1->val<=l2->val)
            {
                ListNode* temp=new ListNode(l1->val);
                curr->next=temp;
                curr=temp;
                l1=l1->next;
            }
            else
            {
                
                ListNode* temp=new ListNode(l2->val);
                curr->next=temp;
                curr=temp;
                l2=l2->next;
            }
        }
        if(l1!=NULL)
        {
            curr->next=l1;
        }
        if(l2!=NULL)
        {
            curr->next=l2;
        }
        return head->next;  
    }
};