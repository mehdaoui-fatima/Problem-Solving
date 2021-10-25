/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   two_sum_lI.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmehdaou <fmehdaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 09:35:19 by fmehdaou          #+#    #+#             */
/*   Updated: 2021/10/25 09:36:23 by fmehdaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<iostream>
#include<vector>

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int  j = 1;
        vector<int> v;
        for(int i = 0; i < numbers.size(); i++)
        {
            for(j = i + 1; j < numbers.size(); j++)
            {
                    
                if((numbers[i] + numbers[j]) == target)
                {
                    v.push_back(i + 1);
                    v.push_back(j + 1);
                    return v;
                }
            }
        }
        return numbers;
    }
};