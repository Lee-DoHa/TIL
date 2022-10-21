import java.util.Arrays;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        int answer = 0;
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int m = sc.nextInt();
        int[] arr = new int[n];
        for(int i = 0; i < n; i++) {
            arr[i] = sc.nextInt();
        }
        Arrays.sort(arr);

        int start = 0;
        int end = n-1;

        while(end > start) {
            if(arr[start] + arr[end] == m) {
                answer++;
                start++;
                end--;

            }
            else if(arr[start] + arr[end] > m) {
                end--;

            }
            else {
                start++;
            }
        }

        System.out.println(answer);
    }
}