/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
void addCurrentNode(int n1, int n2, ListNode *ln){
    int sum = n1 + n2;
    if(sum < 10){
        int val = ln->val + sum;
        if(val < 10) {
            ln->val = val;
            ln->next = new ListNode(0);
        } else {
            ln->val = val % 10;
            ln->next = new ListNode(1);
        }
    } else {
        int val = (ln->val + sum) % 10;
        ln->val = val;
        ln->next = new ListNode(1);
    }
}

class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode *currentNode = new ListNode(0);
        ListNode *rootNode = currentNode;

        while(l1 != NULL and l2 != NULL){
            addCurrentNode(l1->val, l2->val, currentNode);
            l1 = l1->next;
            l2 = l2->next;
            currentNode = currentNode->next;
        }

        if(l1 != NULL){
            while (l1 != NULL){
                addCurrentNode(l1->val, 0, currentNode);
                l1 = l1->next;
                currentNode = currentNode->next;
            }
        }

        if(l2 != NULL){
            while (l2 != NULL){
                addCurrentNode(0, l2->val, currentNode);
                l2 = l2->next;
                currentNode = currentNode->next;
            }
        }

        if(currentNode->val == 0){
            ListNode *temp = rootNode;
            while(temp != NULL){
                if(temp->next != nullptr and temp->next->val == 0 and temp->next->next == nullptr){
                    temp->next = NULL;
                }
                temp = temp->next;
            }
        }
        return rootNode;
    };
};
