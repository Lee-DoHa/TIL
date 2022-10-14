class Solution {
    static int answer = 0;
    public int solution(int[] numbers, int target) {
        dfs(0, numbers, target, 0);
        return answer;
    }
    public void dfs(int n, int[] numbers, int target, int value) {
        if(n == numbers.length) {
            if(value == target) {
                answer++;
            }
            return;
        }
        dfs(n + 1, numbers, target, value + numbers[n]);
        dfs(n + 1, numbers, target, value - numbers[n]);
    }
}