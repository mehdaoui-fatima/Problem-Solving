/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   searchInsertPosition.cpp                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmehdaou <fmehdaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 10:48:40 by fmehdaou          #+#    #+#             */
/*   Updated: 2021/10/22 10:49:11 by fmehdaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>

class Solution {
public:
    
    int searchInsert(vector<int>& nums, int target) {
    
        int len = nums.size();
        for(int i=0; i< len; i++)
        {
            if (nums[i] >= target)
                return i;
        }
        return(len);
    }
};