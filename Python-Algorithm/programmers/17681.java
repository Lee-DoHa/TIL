class Solution {
    public String[] solution(int n, int[] arr1, int[] arr2) {
        String[] answer = new String[n];
        for(int i = 0; i < n; i++) {
            answer[i] = binary(arr1[i], arr2[i], n);
        }
        return answer;
    }
    static String binary(int a, int b, int n) {
        StringBuffer result = new StringBuffer();
        while(a >= 0 && b >= 0) {
            if(result.length() == n) break;
            if(a % 2 == 1 || b % 2 == 1) {
                result.append("#");
            }else {
                result.append(" ");
            }
            a /= 2;
            b /= 2;
        }
        return result.reverse().toString();
    }
}