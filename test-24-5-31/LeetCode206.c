//206. 反转链表
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* reverseList(struct ListNode* head) {

    if (head == NULL)
    {
        return head;
    }
    //递归
    

    //迭代
    // struct ListNode* cur = head;
    // struct ListNode* tail = head;

    // while (tail->next != NULL)
    // {
    //     tail = tail->next ;
    // }
    // while (head->next != NULL)
    // {
    //     cur = head;
    //     while (cur->next->next != NULL)
    //     {
    //         cur = cur->next;
    //     }
    //     cur->next->next = cur;
    //     cur->next = NULL;
    // }
    
    // return tail;
}