class Solution {
    public int solution(int n) {
        int[] answer = new int[n+1];
        for(int i = 0; i <= n; i++) {
            if(i <= 1) {
                answer[i] = i;
            } else {
                int sum = answer[i-1] + answer[i-2];
                answer[i] = sum % 1234567;
            }
        }
        return answer[n];
    }
}