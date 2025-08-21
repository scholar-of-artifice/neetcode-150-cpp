/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution
{
public:
    ListNode *reverseList(ListNode *head)
    {
        if (head == nullptr || head->next == nullptr)
        {
            return head;
        }
        ListNode *a_ptr = nullptr;
        ListNode *b_ptr = head;
        while (b_ptr != nullptr)
        {
            auto c_ptr = b_ptr->next;
            b_ptr->next = a_ptr;
            a_ptr = b_ptr;
            b_ptr = c_ptr;
        }

        return a_ptr;
    }
};