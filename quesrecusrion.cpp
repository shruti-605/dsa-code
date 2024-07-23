//count digit in number
class Solution{
public:
    int countDigits(int n) {
        if (n < 10) {
            return 1;
        }
        return 1 + countDigits(n / 10);
    }
};
//digital root
class Solution {
public:
    //Complete this function
    int digitalRoot(int n) {
        if (n == 0) return 0;
        return 1 + (n - 1) % 9;
    }
}
