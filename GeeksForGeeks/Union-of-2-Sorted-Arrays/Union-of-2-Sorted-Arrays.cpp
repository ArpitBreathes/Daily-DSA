/*
Problem: Union of 2 Sorted Arrays
Platform: GeeksforGeeks
Difficulty: Medium

Approach: Two Pointers

Time Complexity: O(m + n)
Space Complexity: O(m + n)
*/


class Solution {
public:
    vector<int> findUnion(vector<int> &a, vector<int> &b) {
        int m = a.size();
        int n = b.size();
        int i = 0, j = 0;
        vector<int> narr;

        while (i < m && j < n) {
            if (a[i] < b[j]) {
                if (narr.empty() || narr.back() != a[i]) {
                    narr.push_back(a[i]);
                }
                i++;
            } else if (b[j] < a[i]) {
                if (narr.empty() || narr.back() != b[j]) {
                    narr.push_back(b[j]);
                }
                j++;
            } else {

                if (narr.empty() || narr.back() != a[i]) {
                    narr.push_back(a[i]);
                }
                i++;
                j++;
            }
        }

        while (i < m) {
            if (narr.empty() || narr.back() != a[i]) {
                narr.push_back(a[i]);
            }
            i++;
        }

        while (j < n) {
            if (narr.empty() || narr.back() != b[j]) {
                narr.push_back(b[j]);
            }
            j++;
        }

        return narr;
    }
};
