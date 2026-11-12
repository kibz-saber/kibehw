#include <bits/stdc++.h>
using namespace std;
class KthLargest {
public:
    vector<int> kr;
    int kth;
    int ki;

    KthLargest(int k, vector<int>& nums) {
        ki = k;

        sort(nums.begin(), nums.end(), greater<int>());

        for (int i = 0; i < min(k, (int)nums.size()); i++) {
            kr.push_back(nums[i]);
        }

        if (kr.size() == k) {
            kth = kr[k - 1];
        }
    }

int add(int val) {
    if (kr.size() < ki) {
        kr.push_back(val);
        sort(kr.begin(), kr.end(), greater<int>());
        
        kth = kr.back();
        return kth;
    }

    if (val <= kth) {
        return kth;
    }

    int t = ki - 1;

    while (t > 0 && kr[t - 1] < val) {
        kr[t] = kr[t - 1];
        t--;
    }

    kr[t] = val;

    kth = kr[ki - 1];

    return kth;
}

};
