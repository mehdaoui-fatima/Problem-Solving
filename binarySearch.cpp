/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   binarySearch.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmehdaou <fmehdaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/16 16:23:01 by fmehdaou          #+#    #+#             */
/*   Updated: 2021/10/21 19:05:54 by fmehdaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>

int binarySearch(std::vector<int>& nums, int target, int start, int end)
{
    if (start <= end){

        int med = (end + start) / 2;

        if(nums[med] == target){
            return med;
        }
        else if(nums[med] > target)
            return (binarySearch(nums, target, 0, med - 1));
        else 
            return (binarySearch(nums, target, med + 1, end));
    }
        return (-1);
};


int searchInsert(std::vector<int>& nums, int target) {
    return binarySearch(nums, target, 0, nums.size() - 1);
};

int main()
{ 
    std::vector<int> nums;
    nums.push_back(-1); //0
    nums.push_back(0); //1
    nums.push_back(3); //2
    nums.push_back(5); //3
    nums.push_back(9); //4
    nums.push_back(12);// 5
    
    std::cout << searchInsert(nums, 9) << std::endl;
    return (0);
};