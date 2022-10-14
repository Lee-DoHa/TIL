import java.util.*;
class Solution
{
    public int solution(int []A, int []B)
    {
        int answer = 0;
        int listSize = A.length;
        List<Integer> listA = new ArrayList<>();
        List<Integer> listB = new ArrayList<>();
        
        for(int element:A) {
            listA.add(element);
        }
        
        for(int element:B) {
            listB.add(element);
        }
        
        Collections.sort(listA);
        Collections.sort(listB, Collections.reverseOrder());
        
        for(int i = 0; i < listSize; i++){
            answer += listA.get(i) * listB.get(i);
        }

        return answer;
    }
}