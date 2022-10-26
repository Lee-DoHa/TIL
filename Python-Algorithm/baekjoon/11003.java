import java.util.Scanner;

public class Main {
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int p = sc.nextInt();

        int[] arr = new int[n];
        for(int i = 0; i < n; i++) {
            arr[i] = sc.nextInt();
        }

        int start = 0;
        int end = 0;
        int min = 0;
        int[] result = new int[n];
        min = arr[0];
        for(int i = 0; i < n; i++) {
            if(min > arr[i]) {
                min = arr[i];
            }

            if(i - p + 1 < 0) {
                result[i] = min;
            }

        }
        for(int i = 0; i < n; i++) {
            System.out.print(result[i]);
        }


    }
}
