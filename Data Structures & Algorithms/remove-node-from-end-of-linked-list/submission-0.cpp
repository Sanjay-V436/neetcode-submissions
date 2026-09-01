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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(head==NULL){
            return NULL;
        }
        if(n==1&&head->next==NULL){
            return NULL;
        }
        ListNode* temp=head;
        ListNode* prev=NULL;
        while(temp!=NULL){
            ListNode* nxt=temp->next;
            temp->next=prev;
            prev=temp;
            temp=nxt;
        }
        ListNode* rhead = prev;

        // Delete nth node from reversed list
        if (n == 1) {
            ListNode* nxt = rhead->next;
            delete rhead;
            rhead = nxt;
        }
        else {
            ListNode* prev1 = rhead;
            int cnt = 1;
            ListNode* temp1 = rhead->next;

            while (temp1 != NULL) {
                cnt++;

                if (cnt == n) {
                    prev1->next = temp1->next;
                    delete temp1;
                    break;
                }

                prev1 = temp1;
                temp1 = temp1->next;
            }
        }
        ListNode* temp3=rhead;
        ListNode* prev3=NULL;
        while(temp3!=NULL){
            ListNode* nxt=temp3->next;
            temp3->next=prev3;
            prev3=temp3;
            temp3=nxt;
        }
        return prev3;
    }
};
