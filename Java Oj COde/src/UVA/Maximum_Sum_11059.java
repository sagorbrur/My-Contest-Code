package UVA;
import java.io.*;
import java.util.Scanner;

public class Maximum_Sum_11059 {
	public static void main(String[] args){
		Scanner in = new Scanner(System.in);
        int cc = 1;
        while (in.hasNext()) {
            int n = in.nextInt();
            int[] a = new int[n];
            for (int i = 0; i < n; i++) {
                a[i] = in.nextInt();
            }
            long max = 0;
            for (int i = 0; i < a.length; i++)
                for (int j = i; j < a.length; j++) {
                    long sum = 1;
                    for (int k = i; k <= j; k++)
                        sum = sum * a[k];
                    max = Math.max(max, sum);
                }
            System.out.printf("Case #%d: The maximum product is %d.\n\n", cc++,
                    max);
        }	
	}

}
