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
    bool isPalindrome(ListNode* head) {
         ListNode* current = head;
        int len = 0;
        vector<int> temp;
        while(current != NULL) {
            len += 1;
            temp.push_back(current->val);
            current = current->next;
        }
        
        int j = 0;
        for (int i = temp.size() - 1; i >= j; --i) {
            if (temp[j] != temp[i]) {
                return false;
            }
            ++j;
        }
        return true;   
    }
};
