/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pangrams.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmehdaou <fmehdaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 12:02:37 by fmehdaou          #+#    #+#             */
/*   Updated: 2021/10/15 12:03:51 by fmehdaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bits/stdc++.h"
#include  <unordered_map>

using namespace std;

/*
 * Complete the 'pangrams' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING s as parameter.
 */

string pangrams(string s) {
    string result;
    unordered_map<char, int> map;
     unordered_map<char, int>::iterator iter;
     
    for(int i = 0; i<s.length(); i++)
    {
        if (isalpha(s[i]))
            map[s[i]]++;
    }
        
        
    for(iter = map.begin(); iter != map.end(); iter++)
    {
        std::cout << iter->first << "|" <<iter->second << std::endl;
    }   
    result =(map.size() == 26)? "pangram" : "not pangram";
    return (result);
}

int main()
{

   string s = "uIClDDH eBs mSL WXNKJ whnDMS xQDtDlEvJSFfXjAUn uB Nb xS oJNxsRwDboYXz gTjaHoPGrW eLUIHqYdwvTxXdhh nubnZ RvEKaglFnfCgpbdEKoGiKKp EiJJOJePbZIzwvViZOolMn k XHKZSZ C pnfoIQnJznckCwXdmhn Twus xrcFOaNHyisI csGwqQGSVhhVpCnnd kzwViEVDyREYkgyEhXWFrht q DbrLLnNOzuiUibW YHJRDrXJK rXd ezuABu soToNZGssfqpSe FRZMqrNQmkQAWwAHzIy Uik JwLJJDpLPcX jNn neguK RViE wTYMOLDSQaPlKXAjbWzHvgOlaxyxy qQbO GgKaO x lEEpzhopEYApg tcnxQMI FxjclEzttcdTXAxUNWiORidNFIVTaOhSeFHeCEpEiJMEgSI ZHxTbqpZmEo tgmyJyUQeOSWZWhHmnU KlvUNaKXZ WvyRQsOnzP";
    string result = pangrams(s);


    return 0;
}