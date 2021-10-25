/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   firtBadVersion.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmehdaou <fmehdaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 09:19:45 by fmehdaou          #+#    #+#             */
/*   Updated: 2021/10/23 12:08:30 by fmehdaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <iostream>
#include <vector>

std::vector<int> sortedSquares(std::vector<int>& num) {
       
        int len = num.size();
        std::vector<int> v(len, 0);
        // std::vector<int>::iterator it = num.begin();
        int sq, tmp;
        tmp = sq = 0;
 
        for(int i = 0; i < num.size(); i++)
        {
            sq = num[i] * num[i];
            if (i > 0 && sq < v[i - 1])
            {
                tmp = v[i - 1];
                v[i] = sq;
                v[i +  1] = tmp;
                std::cout << "swap  " << v[i]  << "|" << v[i+1] << std::endl;
            }
            else
            {
                v[i] = sq;
                std::cout << ">>>" << v[i] <<std::endl;
                // v.insert(it + i, 1, sq);
            }
        }
        return v;
    }

int main()
{ 
    std::vector<int> num;
    num.push_back(-4); 
    num.push_back(-1); 
    num.push_back(-0); 
    num.push_back(3); 
    num.push_back(10); 
    std::vector<int> v = sortedSquares(num);
    for (size_t i = 0; i < v.size(); i++)
    {
        std::cout << v[i] << "\t";
    }
    
   
    return (0);
};