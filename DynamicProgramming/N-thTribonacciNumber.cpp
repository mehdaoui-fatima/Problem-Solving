/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   N-thTribonacciNumber.cpp                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmehdaou <fmehdaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 09:39:31 by fmehdaou          #+#    #+#             */
/*   Updated: 2021/10/27 09:42:44 by fmehdaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Solution1 using recursion methode */
class Solution {
public:
    int tribonacci(int n) {
         if(n == 0)
            return (0);
        if (n == 1 || n == 2)
            return (1);
        else
            return tribonacci(n-1) + tribonacci(n-2) + tribonacci(n-3);
    }
};


class Solution {
public:
    int tribonacci(int n) {
        int l[38];

        l[0] = 0;
        l[1] = l[2] = 1;
        for (int i = 3; i < 38; i++)
            l[i] = l[i - 3] + l[i - 2] + l[i - 1];
        return l[n];
    }
};