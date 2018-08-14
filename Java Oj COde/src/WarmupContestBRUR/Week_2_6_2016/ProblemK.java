package WarmupContestBRUR.Week_2_6_2016;

import java.util.Scanner;

public class ProblemK {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner in = new Scanner(System.in);
		long n,s;
		n=in.nextInt();
		s=in.nextInt();
		if(s<=((n+1)/2))
			System.out.println(s*2-1);
		else
			System.out.println((s - (n + 1) / 2) * 2);

	}

}
