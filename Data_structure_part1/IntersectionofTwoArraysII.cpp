/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IntersectionofTwoArraysII.cpp                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmehdaou <fmehdaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 10:18:14 by fmehdaou          #+#    #+#             */
/*   Updated: 2021/10/28 10:19:08 by fmehdaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>

class Solution {
public:
    std::vector<int> intersect(std::vector<int>& nums1, std::vector<int>& nums2) {
        
        int j;
        std::vector<int> v;
        int len2 = nums2.size();
        int len1 = nums1.size();
        
        for (int i = 0; i < len1; i++)
        {
            j = 0;
            while (j < len2 && nums1[i] != nums2[j])
                j++;
            if (j < len2 && nums1[i] == nums2[j])
            {
               v.push_back(nums1[i]);
                nums2[j] = -1;
            }
        }        
        return v;
    }
};