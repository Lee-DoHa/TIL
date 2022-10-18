class Solution {
    public String solution(String s) {
        StringBuffer answer = new StringBuffer();
        int tmp = 0;
        s = s.toUpperCase();
        for(int i = 0; i < s.length(); i++){
            if(s.charAt(i) == ' '){
                tmp = i+1;
                answer.append(s.charAt(i));
                continue;
            }
            if((tmp-i)%2 != 0) {
                answer.append(Character.toLowerCase(s.charAt(i)));
                continue;
            }
            answer.append(s.charAt(i));
        }
            
        return answer.toString();
    }
}