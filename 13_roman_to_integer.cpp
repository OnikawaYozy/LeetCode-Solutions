#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;
typedef long long ll;
typedef string str;
const ll mod = 1e9 + 7;
class Solution {
public:
    int romanToInt(string s) {
        int sum = 0;
        for (ll i = 0; i < s.size(); i++)
        {
            if (s[i] == 'I')
            {
                if (s[i+1] == 'V' && i < s.size() - 1)
                {
                    sum += 4;
                    i++;
                }
                else if (s[i+1] == 'X' && i < s.size() - 1)
                {
                    sum += 9;
                    i++;
                }
                else sum += 1;
            }
            else if (s[i] == 'V') sum += 5;
            else if (s[i] == 'X')
            {
                if (s[i+1] == 'L' && i < s.size() - 1)
                {
                    sum += 40;
                    i++;
                }
                else if (s[i+1] == 'C' && i < s.size() - 1)
                {
                    sum += 90;
                    i++;
                }
                else sum += 10;
            }
            else if (s[i] == 'L') sum += 50;
            else if (s[i] == 'C')
            {
                if (s[i+1] == 'D' && i < s.size() - 1)
                {
                    sum += 400;
                    i++;
                }
                else if (s[i+1] == 'M' && i < s.size() - 1)
                {
                    sum += 900;
                    i++;
                }
                else sum += 100;
            }
            else if (s[i] == 'D') sum += 500;
            else if (s[i] == 'M') sum += 1000;
        }
        return sum;
    }
};