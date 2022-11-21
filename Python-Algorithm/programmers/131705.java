class Solution {
    public int solution(int[] number) {
        int answer = 0;
        int first = 0;
        int second = 1;
        for(int i = 2; i < number.length; i++) {
            int sum = number[first] + number[second] + number[i];
            if(second == number.length - 2) {
                int tmp = first++;
                second = tmp + 2;
                i = tmp + 2;
            }

            if(sum == 0) {
                answer++;
            }

            if(i == number.length - 1) {
                int tmp = second++;
                i = tmp + 1;
            }

        }

        return answer;
    }
}