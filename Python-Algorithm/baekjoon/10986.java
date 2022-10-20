import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        int answer = 0;
        Scanner sc = new Scanner(System.in);
        int N = sc.nextInt();
        int M = sc.nextInt();
        long[] S = new long[N];
        long[] C = new long[M];
        S[0] = sc.nextInt();
        for(int i = 1; i < N; i++) {
            S[i] = S[i-1] + sc.nextInt();
        }

        for(int i = 0; i < N; i++) {
            int re = (int)(S[i] % M);
            if(re == 0) {
                answer++;
            }
            C[re]++;
        }

        for(int i = 0; i < M; i++) {
            if(C[i] > 1) {
                answer = (int) (answer + (C[i] * (C[i] - 1) / 2));
            }
        }
        System.out.println(answer);
    }
}