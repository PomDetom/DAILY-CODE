//LeetCode203.�Ƴ�����Ԫ��
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* removeElements(struct ListNode* head, int val) {

    //�ݹ�
    if (head == NULL)
    {
        return head;
    }

    head->next = removeElements(head->next, val);
    if (head->val == val)
    {
        return head->next;
    }
    else
    {
        return head;
    }

    //˫ָ��
    // if (head == NULL)
    // {
    //     return head;
    // }
    // while (head->val == val)
    // {
    //     head = head->next;
    //     if (head == NULL)
    //     {
    //         return head;
    //     }
    // }    
    // struct ListNode* tail = head->next;
    // struct ListNode* cur = head;
    // while (tail)
    // {
    //     if (tail->val == val)
    //     {
    //         tail = tail->next;
    //         cur->next = tail;
    //     }
    //     else
    //     {
    //         cur = tail;
    //         tail = tail->next;
    //     }
    // }

    // return head;
}