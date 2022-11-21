import java.util.*;

class Solution {
    public int[] solution(int[] numbers) {
        List<Integer> result = new ArrayList<>();

        for(int i = 0; i < numbers.length - 1; i++) {
            for(int j = i + 1; j < numbers.length; j++) {
                result.add(numbers[i] + numbers[j]);
            }
        }
        Collections.sort(result); 
        int[] answer = result.stream().mapToInt(i->i).toArray();
        int[] resultArr = Arrays.stream(answer).distinct().toArray();
        return resultArr;
    }
}