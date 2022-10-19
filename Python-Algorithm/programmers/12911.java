class Solution {
    public int solution(int n) {
        int answer = 0;
        int a = binary(n);
        while(true) {
            n++;
            if(a == binary(n)) {
                answer = n;
                break;
            }
        }
        return answer;
    }
    static int binary(int n) {
        int result = 0;
        while(n > 0) {
            if(n%2 == 1) {
                result++;
            }
            n /= 2;
        }
        return result;
    }
}