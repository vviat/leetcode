struct ListNode* deleteDuplicates(struct ListNode* head) {
     if(head == NULL || head->next == NULL)  
            return head;
    struct ListNode *pre = head;
    struct ListNode *cur = head->next;  
        while(cur != NULL)  {  
            if(cur->val == pre->val) {  
                pre->next=cur->next;
            } else {  
                pre=pre->next;    
            }  
            cur=cur->next;  
            }  
        return head;  
}
