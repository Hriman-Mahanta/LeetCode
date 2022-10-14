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
class Solution {
public:
    ListNode* deleteMiddle(ListNode* head) {
        ListNode* ptr = head;
        int count = 0;
        while(ptr!=NULL)
        {
            count ++;
            ptr = ptr->next;
        }
        count /= 2;
        //cout<<count;
        int n=0;
        ptr = head;
        while(n<count-1)
        {
            ptr = ptr->next;
            n++;
        }
        if(count == 0)
            return NULL;
        ptr->next = ptr->next->next;
        return head;
    }
};