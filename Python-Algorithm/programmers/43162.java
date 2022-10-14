class Solution {
    static int[] able;
    public int solution(int n, int[][] computers) {
        int answer = 0;
        able = new int[n];
        for(int i = 0; i < n; i++) {
            if(able[i] == 0) {
                dfs(i, computers, able);
                answer++;
            }
        }
        
        return answer;
    }
    public void dfs(int i, int[][] computers, int[] able) {
        able[i] = 1;
        for(int j = 0; j < computers.length; j++) {
            if(i != j && computers[i][j] == 1 && able[j] == 0) {
                dfs(j, computers, able);
            }
        }
    }
}