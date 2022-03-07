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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        if(!l1 && !l2)
            return NULL;
        
        if(!l1) 
            return l2;
        
        if(!l2) 
            return l1;
    
        ListNode* prev = NULL;
        ListNode* list1 = l1;
        ListNode* list2 = l2;
        
        while(list1 && list2)
        {
            if(list1->val < list2->val)
            {
                prev = list1;
                list1 = list1->next;
            }
            else
            {
                if(prev != NULL)
                    prev->next = list2;
                
                prev = list2;
                list2 = list2->next;
                prev->next = list1;
                
            }
        }
        
        if(!list1)
            prev->next = list2;
        
        return l1->val < l2->val ? l1:l2;
    }
};