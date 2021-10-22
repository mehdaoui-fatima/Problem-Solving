/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   firtBadVersion.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmehdaou <fmehdaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 09:19:45 by fmehdaou          #+#    #+#             */
/*   Updated: 2021/10/22 09:20:34 by fmehdaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <iostream>
#include <vector>

int binarySearch(int start, int end)
{
    int med = (start +end) / 2;            
    if(isBadVersion(med) && !isBadVersion(med -1))
        return(med);
    else if isBadVersion((med - 1))
        return binarySearch(0, med - 1);
    else 
        return binarySearch(med+1, n);
    return (-1);       
}

int firstBadVersion(int n)
{
        return (binarySearch(0, n));
}

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