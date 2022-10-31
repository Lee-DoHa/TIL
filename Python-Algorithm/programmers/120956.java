class Solution {
    String[] speakingList = {"aya", "ye", "woo", "ma"};
    public int solution(String[] babbling) {
        int answer = 0;

        for (String str : babbling) {
            String tempStr = str;
            for (String speak : speakingList) {
                tempStr = tempStr.replace(speak, "");
            }
            if (tempStr.length() == 0) {
                answer++;
            }
        }
        return answer;
    }
}