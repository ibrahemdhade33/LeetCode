/*
 * @lc app=leetcode id=2 lang=cpp
 *
 * [2] Add Two Numbers
 */

// @lc code=start
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
        ListNode *head,*tail ; 
        head  =tail = NULL;
        int inHand = 0 ; 
        while (l1 != NULL || l2 != NULL || inHand!=0 ){
            int sum = 0 ;
            if(l1!=NULL)
                sum+=l1->val ; 
            if(l2!=NULL)
                sum+=l2->val ; 
            sum+=inHand ; 
             
             ListNode *temp = getNewNode(sum%10);
             inHand = sum/10 ; 
             if(head == NULL && tail ==NULL)
             {
                head = tail = temp ; 
                head ->next = tail->next = NULL ; 
             }
             else {
               tail ->next =temp ;
               tail = tail->next ;  
               tail ->next = NULL ;
             }
            l1 = l1 ? l1->next : nullptr;
            l2 = l2 ? l2->next : nullptr;
        }
      
        
        return head ; 
    }
    ListNode *getNewNode(int data){

        return new ListNode(data); 
        
         
    }
};
// @lc code=end

