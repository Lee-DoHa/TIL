import java.util.Stack;
class Solution {
    public int[] solution(int n, String[] words) {
        int[] answer = {0,0};

        Stack<String> st = new Stack<>();

        for(int i = 0; i < words.length; i++) {

            if(st.contains(words[i])) {
                answer[0] = i % n + 1;
                answer[1] = i / n + 1;
                break;
            }

            if(i > 0 && words[i].charAt(0) != st.peek().charAt(st.peek().length()-1)) {
                answer[0] = i % n + 1;
                answer[1] = i / n + 1;
                break;
            }
            st.push(words[i]);
        }


        // 몇명인지 나타내는 n, 문자들의 배열이 들어가있는 words
        // answer[0] = 회원의 번호, answer[1] = 돈 횟수
        // 탐색으로 진행하면 되지 않을까? 각 word의 인덱스를 기준으로,,

        return answer;
    }
}