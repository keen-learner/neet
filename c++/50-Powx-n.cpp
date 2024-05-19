/*
Implement pow(x, n), which calculates x raised to the power n (i.e., xn).

Example 1:
    Input: x = 2.00000, n = 10
    Output: 1024.00000

Example 2:
    Input: x = 2.10000, n = 3
    Output: 9.26100

Example 3:
    Input: x = 2.00000, n = -2
    Output: 0.25000
    Explanation: 2-2 = 1/22 = 1/4 = 0.25

Constraints:
    -100.0 < x < 100.0
    -231 <= n <= 231-1
    n is an integer.
    Either x is not zero or n > 0.
    -104 <= xn <= 104
*/

// Time:  O(logn)
// Space: O(1)
/*
    Binary Exponentiation approach
    x^n = (x^2)^(n/2) if n is even
          x*(x^2)^(n-1/2) if n is odd
    https://www.geeksforgeeks.org/binary-exponentiation-for-competitive-programming/
*/
class Solution {
public:
    double myPow(double x, int n) {
        int an = abs(n);
        double res = 1;
        while (an) {
            if(an % 2 != 0) {
                res = res* x;
            }
            x = x * x;
            an = an/2;
        }
        return n > 0? res:(1/res);
        return res;
    }
};