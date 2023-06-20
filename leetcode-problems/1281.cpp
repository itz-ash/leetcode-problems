class Solution {
public:
    int subtractProductAndSum(int n) {
        int product = 1;
        int sum = 0;
        int reminder;
        while (n != 0){
            reminder = n%10;
            n = n/10;
            sum += reminder;
            product *= reminder;
        }

        return product - sum;
    }
};