import java.io.FileInputStream;
import java.io.FileNotFoundException;
import java.util.Scanner;

public class Main {
	public static void main(String[] args) throws FileNotFoundException {
		//System.setIn(new FileInputStream("input.txt"));
		Scanner in = new Scanner(System.in);

		int M = in.nextInt();
		int N = in.nextInt();
		int[] A = new int[N + 1];
		for (int i = 2; i <= N; i++) {
			A[i] = i;
		}
		for (int i = 2; i <= Math.sqrt(N); i++) {
			if (A[i] == 0) {
				continue;
			}
			for (int j = i + i; j <= N; j = j + i) {
				A[j] = 0;
			}

		}
		for (int i = M; i <= N; i++) {
			if (A[i] != 0) {
				System.out.println(A[(int) i]);
			}
		}
		in.close();

	}
}
