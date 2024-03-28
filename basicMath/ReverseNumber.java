// 7. Reverse Integer [LeetCode]
public class ReverseNumber {
    public int reverse(int x) {
        if(x <= -2147483648 || x >= 2147483647) {
            return 0;
        } else {
            long reverseX = 0;
            int num = Math.abs(x);

            while(num > 0) {
                int digit = num % 10;
                num /= 10;

                reverseX = (reverseX * 10) + digit;
            }

            if(reverseX >= 2147483647) {
                reverseX = 0;
            }

            if(x < 0) {
                reverseX *= -1;
            }

            return (int)reverseX;
        }
    }
}
