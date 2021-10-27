#include <iostream>
#include <unordered_map>

using namespace std;
 int firstUniqChar(string s) {
        unordered_map<char, int> map;
         unordered_map<char, int>::iterator ir;
        char res;
        
        for(int i = 0; i < s.size(); i++)
            map[s[i]]++;
        for (ir = map.begin(); ir != map.end(); ir++)
        {
            if (ir->second == 1)
                res = ir->first; 
        }
            
       for(int i = 0; i < s.size(); i++)
           if(res == s[i])
               return (i);
        return (-1);
    }

    int main()
    {
        cout << firstUniqChar("aaadd") << endl;
    }