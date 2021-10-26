/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   middle-of-the-linked-list.cpp                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmehdaou <fmehdaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 10:56:22 by fmehdaou          #+#    #+#             */
/*   Updated: 2021/10/26 10:56:23 by fmehdaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
    ListNode* middleNode(ListNode* head) {
        int i = 0;
        ListNode *current = head;
        ListNode *cur = head;
        while(current)
        {
            current = current->next;
            i++;
        }
        i = i/2;
        while(i > 0)
        {
            cur = cur->next;
            i--;
        }
        return (cur); 
    }
};