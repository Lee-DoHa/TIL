class Solution {
    public String solution(String s, int n) {
        String answer = "";
        for(int i = 0; i < s.length(); i++) {
            char c = s.charAt(i);
            if(c == ' ') {
                answer += c;
                continue;
            }
            if(c >= 'a' && c <= 'z') {
                answer += (char)((c - 'a' + n) % 26 + 'a');
            }
            if(c >= 'A' && c <= 'Z') {
                answer += (char)((c - 'A' + n) % 26 + 'A');
            }
        }
        return answer;
    }
}