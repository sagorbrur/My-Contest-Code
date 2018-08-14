package WarmupContestBRUR.Week_2_6_2016;

import java.util.Scanner;

public class ProblemC {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner in=new Scanner(System.in);
		int n;
		while(in.hasNext())
		{
			
			n=in.nextInt();
			
			if(n%6==0)
				System.out.println("Y");
			else
				System.out.println("N");
		}

	}

}
