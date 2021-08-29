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
    int numberOfNodes(ListNode *p){
        int count = 0;
        while(p != NULL){
            p = p->next;
            count++;
        }
        return count;
    }
    
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(n == 1 && head->next == NULL){
            return head->next;
        }
        ListNode* q = head;
        int numberOfNodes = this->numberOfNodes(head);
        int target = numberOfNodes - n;
        if(target == 0)
            return head->next;
        int count = 1;
        while(count != target){
            head = head->next;
            count++;
        }
        
        
        head->next = head->next->next;
        return q;
    }
};s