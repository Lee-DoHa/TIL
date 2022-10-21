import java.util.Arrays;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        int answer = 0;
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int[] arr = new int[n];
        for(int i = 0; i < n; i++) {
            arr[i] = sc.nextInt();
        }
        Arrays.sort(arr);


        for(int i = 0; i < n; i++) {
            int tmp = arr[i];
            int start = 0;
            int end = n-1;

            while(start < end) {
                if(arr[start] + arr[end] == tmp) {
                    if(start != i && end != i) {
                        answer++;
                        break;
                    } else if(start == i) {
                        start++;
                    } else if(end == i) {
                        end--;
                    }
                } else if(arr[start] + arr[end] > tmp) {
                    end--;
                } else {
                    start++;
                }
            }
        }

        System.out.println(answer);
    }
}