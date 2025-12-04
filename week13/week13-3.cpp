//week13-3.cpp
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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* ans = new ListNode(999);
        ListNode* ans2 =ans;
        int carry = 0;
        while( l1 != nullptr){
            int now = carry;
            if(l1!= nullptr){
                now+= l1->val;
                l1 = l1->next;
            }
            if( l2 != nullptr){
                now+= l2->val;
                l2 = l2->next; //´«¤U¤@µ§
            }
            ans2 -> next = new ListNode( now%10);
            ans2 = ans2->next;
            carry = now /10;
        }
        if(carry>0)ans2 ->next = new ListNode( carry );
        return ans->next;

    }
};
