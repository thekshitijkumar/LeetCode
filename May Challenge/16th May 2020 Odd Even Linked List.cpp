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
    ListNode* oddEvenList(ListNode* head) {
        if(head==NULL||head->next==NULL)
            return head;
        ListNode* odd=head;
        ListNode* even=head->next;
        ListNode* evenf=even;
        while(odd->next->next&&even->next->next)//both odd and even exist
        {
            odd->next=even->next;
            odd=even->next;
            even->next=odd->next;
            even=odd->next;
            
        }
        
        if(odd->next->next!=NULL)//single odd node exist
        {
            odd->next=even->next;
            odd=even->next;
            even->next=NULL;//as there are no nodes left therefore making last node NULL
        }
        odd->next=evenf;
        return head;
        
    }
};
