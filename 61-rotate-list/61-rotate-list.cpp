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
    ListNode* rotateRight(ListNode* head, int k) {
        if(!head)
            return head;
        
        ListNode * temp=head,*tail=head;
        int l=1;
        while(tail->next){
            tail=tail->next;
            l++;
        }
        
        tail->next=head;
        
        if(k %= l){
            for(int i=0;i<l-k;i++){
                tail=tail->next;
            }
        }
        
        ListNode *nh=tail->next;
        tail->next=NULL;
        return nh;
        
    }
};