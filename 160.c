struct ListNode *getIntersectionNode(struct ListNode *headA, struct ListNode *headB) {
    struct ListNode  *cur = headA, *pre = headB;
        int a = 0, b = 0, n;
    while(cur){
        cur = cur->next;
        a++;
    }
    while(pre ){
        pre = pre->next;
        b++;
    }
    n = a - b;
    for(int i = 0; i < abs(n); i++) {
        if(n > 0&&cur!=NULL) {   
       cur = cur->next;  
    }else if(n < 0 && pre!=NULL){ 
       pre = pre->next;
    }
    }
    
    while(cur && pre ) {
        if(pre==cur) {
            return pre;
        }
            pre = pre->next;
            cur = cur->next;
    }  
    return NULL;
}
