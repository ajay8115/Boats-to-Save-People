// CODE BY :- AJAY PAL IIT (BHU) VARANASI
#include <bits/stdc++.h>
#define ll long long int
#define ld long double
#define kk '\n'
using namespace std;

class Solution
{
public:
    int numRescueBoats(vector<int> &a, int k)
    {
        int n = a.size();
        sort(a.begin(), a.end());

        int cnt = 0;
        int i = 0, j = n - 1;
        while (i <= j)
        {
            cnt++;
            if (a[i] + a[j] <= k)
            {
                i++;
                j--;
            }
            else
            {
                j--;
            }
        }

        return cnt;
    }
};

