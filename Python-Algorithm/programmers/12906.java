import java.util.*;

public class Solution {
    public int[] solution(int []arr) {
        int[] answer = {};
        List<Integer> list = new ArrayList<>();
        list.add(arr[0]);
        for(int i = 1; i < arr.length; i++) {
            if(arr[i] == arr[i-1]) {
                continue;
            }
            list.add(arr[i]);
        }
        answer = list.stream().mapToInt(i -> i).toArray();
        return answer;
    }
}