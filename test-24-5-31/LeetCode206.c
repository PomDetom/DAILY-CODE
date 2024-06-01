//LeetCode206. ��ת����
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* reverseList(struct ListNode* head) {

    //�ݹ�
    if (head == NULL || head->next == NULL)
    {
        return head;
    }

    struct ListNode* cur = reverseList(head->next);
    head->next->next = head;
    head->next = NULL;
    
    return cur;

    //����
    // if (head == NULL)
    // {
    //     return head;
    // }
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