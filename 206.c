/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
// struct ListNode* reverseList(struct ListNode* head) {
//     if(head==NULL||head->next==NULL)  
//             return head;  
              
//         struct ListNode * first=NULL;  
//         struct ListNode * second=head;  
//         struct ListNode * third=NULL;  
//         while(second)  
//         {  
//             third=second->next;  
//             second->next=first;  
//             first=second;  
//             second=third;  
//         }  
//         return first;  
// }  

// void __reverseList(struct ListNode* head, struct ListNode* ret) {
//     if (head == NULL) return;
//     struct ListNode* p = head->next;
//     head->next = ret->next;
//     ret->next=head;
//     __reverseList(p, ret);
// }

// struct ListNode* reverseList(struct ListNode* head) {
//     struct ListNode ret;
//     ret.next = NULL;
//     __reverseList(head, &ret);
//     return ret.next;
// }

    struct ListNode* reverseList(struct ListNode* head) {
        struct ListNode *ret = reverseList(head->next);
        head->next->next = head;
        
    }
