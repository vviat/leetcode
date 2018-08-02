struct ListNode* mergeTwoLists(struct ListNode* l1, struct ListNode* l2) {
    if (!l1 && !l2) return NULL;
    if (!l1) return l2;
    if (!l2) return l1;
    struct ListNode *head, *p;
    if (l1->val < l2->val){
        head = p = l1;
        l1 = l1->next;
    }
    else {
        head = p = l2;
        l2 = l2->next;
    }
    while (l1 && l2){
        if (l1->val < l2->val){
            p->next = l1;
            l1 = l1->next;
        }
        else {
            p->next = l2;
            l2 = l2->next;
        }
        p = p->next;
    }
    if (!l1){
        p->next = l2;
    }
    if (!l2){
        p->next = l1;
    }
    return head;
}
