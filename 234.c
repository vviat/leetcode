struct ListNode* reverseEnd(struct ListNode* head, int num)
{
    int i;
    struct ListNode *node, *node_next, *end;

    for (i = 0; i < num/2; i++) {
        head = head->next;
    }
    if (num % 2 != 0)
        head = head->next;
    if (num <= 3)
        return head;
    node = head;
    node_next = node->next;
    end = node_next->next;
    node->next = NULL;
    while (end != NULL) {
        node_next->next = node;
        node = node_next;
        node_next = end;
        end = end->next;
    }
    node_next->next = node;

    return node_next;
}

bool isPalindrome(struct ListNode* head) {
    if (head == NULL)
        return true;

    int i, num = 0;
    struct ListNode *end = head;
    while(end != NULL) {
        end = end->next;
        num++;
    }
    if (num == 1)
        return true;
    end = reverseEnd(head, num);

    for (i = 0; i < num/2; i++) {
        if (head->val != end->val)
            return false;
        head = head->next;
        end = end->next;
    }

    return true;
}
