/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* start;
        vector<int> tempStorage1;
        vector<int> tempStorage2;
        start = l1;
        while(start!= NULL) {
            int i = 0;
            int multiplier = 1;
            tempStorage1[i] += (start->val) * multiplier;
            start = start->next;
            multiplier *= 10;
            i++;
        }
        start = l2;
        while(start!= NULL) {
            int i = 0;
            int multiplier = 1;
            tempStorage2[i] += (start->val) * multiplier;
            multiplier *= 10;
            i++;
        }
        int result1 = 0;
        int result2 = 0;
        for(int i = 0; i < tempStorage1.size(); i++) {
            result1 += tempStorage1[i];
            result2 = tempStorage2[i];
        }
        int finalResult = result1 + result2;
        ListNode* resultOne;
        for(int i = 0; i < tempStorage1.size(); i++) {
            int divisor = 10;
            resultOne->val = finalResult % divisor;
            resultOne = resultOne->next;
        }
        return resultOne;
    }

};
