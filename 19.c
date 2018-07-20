struct ListNode* removeNthFromEnd(struct ListNode* head, int n) {
        struct ListNode *cur = head, *pre = head;
        while(n--) cur = cur->next;
        if(cur == NULL) return head->next;
        while(cur->next) {
            pre = pre->next;
            cur = cur->next;
        }
        pre->next = pre->next->next;
        return head;
}

