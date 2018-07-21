struct ListNode* removeElements(struct ListNode* head, int val) {
    struct ListNode *tmp = head;  
    struct ListNode *pre = NULL;  
    while(tmp){  
        if(head == tmp && tmp->val == val){  
            tmp = tmp->next;  
            head = tmp;  
        }  
        else if(tmp->val == val){  
            pre->next = pre->next->next; 
            tmp = pre->next;  
        }else{  
            pre = tmp;  
            tmp = tmp->next;  
        }  
    }  
    return head;  
}  
