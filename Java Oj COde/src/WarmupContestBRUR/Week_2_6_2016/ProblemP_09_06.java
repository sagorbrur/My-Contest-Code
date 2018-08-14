package WarmupContestBRUR.Week_2_6_2016;

import java.io.*;
import java.util.Scanner;

public class ProblemP_09_06 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner in=new Scanner(System.in);
		int h1,h2,m1,m2;
		
		while(in.hasNext()){
		h1=in.nextInt();
		m1=in.nextInt();
		h2=in.nextInt();
		m2=in.nextInt();
		
		if(h1==0&&m1==0&&h2==0&m2==0)
			break;
		
		int start=(h1*60)+m1;
		int end=(h2*60)+m2;
		int sleep=Math.abs(end-start);
		
		if(start>end)
			sleep=1440-sleep;
		else if(start==end)
			sleep=1440;
		
		System.out.println(sleep);
		

	}
	}

}
