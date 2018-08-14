package WarmupContestBRUR.Week_2_6_2016;
//http://acm.hust.edu.cn/vjudge/contest/view.action?cid=119283#problem/O

import java.io.*;
import java.util.Scanner;

public class ProblemO_09_06 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub

		Scanner in=new Scanner(System.in);
		
		int t,r,len,wid,x1,y1;
		t=in.nextInt();
		
		for(int i=1;i<=t;i++){
		r=in.nextInt();
		len=(100*r)/20;
		wid=(60*r)/20;
		wid=wid/2;
		x1=(len*45)/100;
		y1=(len*55)/100;
		
		
		System.out.printf("Case %d:\n",i);
		System.out.printf("%d %d\n",-x1,wid);
		System.out.printf("%d %d\n",y1,wid);
		System.out.printf("%d %d\n",y1,-wid);
		System.out.printf("%d %d\n",-x1,-wid);
	}
	}

}
