import java.util.*;
class Solution {
    public int solution(int[] d, int budget) {
        int answer = 0;
        Arrays.sort(d);
        int tmp = 0;
        for(int i = 0; i < d.length; i++) {
            tmp += d[i];
            if(tmp <= budget) {
                answer++;
                continue;
            }
        }
        return answer;
    }
}