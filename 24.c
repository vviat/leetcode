struct ListNode* swapPairs(struct ListNode* head) {
    if(head == NULL || head->next == NULL) return head;
        struct ListNode* temp = head->next;
        head->next = swapPairs(temp->next);
        temp->next = head;
        return temp;
}


struct ListNode* swapPairs(struct ListNode* head) {
    if(head == NULL || head->next == NULL) return head;
        struct ListNode *p = head, *q = head->next->next;
        while(q != NULL) {
            p->next->next = p;
            p->next = q->next;
            p = q;
            q = q->next;
            if(q) q = q->next;
            else break;
        }
   
}
