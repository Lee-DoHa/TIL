import java.util.Stack;

class Solution {
    boolean solution(String s) {
        Stack<Character> stack = new Stack<Character>();
        char[] ch = s.toCharArray();
        if(ch[0] == ')' || ch[s.length()-1] == '(') {
            return false;
        }
        for(int i = 0; i < s.length(); i++) {
            if(ch[i] == '(') {
                stack.push(ch[i]);
                continue;
            }
            if(stack.isEmpty() == true) {
                return false;
            }
            stack.pop();
        }
        if(stack.isEmpty() == false) {
            return false;
        }

        return true;
    }
}