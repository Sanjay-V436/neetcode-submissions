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
    bool hasCycle(ListNode* head) {
        unordered_map<ListNode* , int> cyc;
        if(head==NULL){
            return false;
        }
        ListNode* temp = head;
        while(temp){
            if(cyc.find(temp)!=cyc.end()){
                return true;
            }
            else{
                cyc[temp]++;
            }
            temp=temp->next;
        }
        return false;
    }
};
