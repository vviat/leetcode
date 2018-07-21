#include <stdlib.h>
typedef struct {
     int *data;
    int size, top;
} MyStack;
bool myStackEmpty(MyStack* obj);
/** Initialize your data structure here. */
MyStack* myStackCreate(int maxSize) {
    MyStack *s;
    s->data = (int *)malloc(sizeof(int) * maxSize);
    s->size = maxSize;
    s->top = -1;
    return s;
}

/** Push element x onto stack. */
void myStackPush(MyStack* obj, int x) {
    if (obj->top == obj->size - 1) {
        //return 0;
    }
    obj->data[++(obj->top)] = x;
    //return 1;
}

/** Removes the element on top of the stack and returns that element. */
int myStackPop(MyStack* obj) {
    if (!empty(obj)) {
        --(obj->top);
        return 1;
    }
    return 0;
}

/** Get the top element. */
int myStackTop(MyStack* obj) {
    return obj->data[obj->top];
}

/** Returns whether the stack is empty. */
bool myStackEmpty(MyStack* obj) {
    if(obj->top == -1){
        return true;
    }else {
        return false;
    }
}

void myStackFree(MyStack* obj) {
    free(obj->data);
    free(obj);
}

/**
 * Your MyStack struct will be instantiated and called as such:
 * struct MyStack* obj = myStackCreate(maxSize);
 * myStackPush(obj, x);
 * int param_2 = myStackPop(obj);
 * int param_3 = myStackTop(obj);
 * bool param_4 = myStackEmpty(obj);
 * myStackFree(obj);
 */
