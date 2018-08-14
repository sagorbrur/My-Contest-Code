package WarmupContestBRUR.Week_2_6_2016;
//acm.hust.edu.cn/vjudge/contest/view.action?cid=118724#problem/J
import java.io.*;
import java.util.Scanner;

public class ProblemJ {

	public static void main(String[] args) {
		// TODO Auto-generated method stub

		Scanner in=new Scanner(System.in);
		int t;
		int x,x1;
		int y,y1;
		//int n;
		t=in.nextInt();
		while(t!=0){
			
			x1=in.nextInt();
			y1=in.nextInt();
			
		for(int i=1;i<=t;i++){
			x=in.nextInt();
			y=in.nextInt();
			
			if (x == x1 || y == y1)
				System.out.println("divisa");
			else if (x < x1 && y > y1)
				System.out.println("NO");
			else if (x > x1 && y > y1)
				System.out.println("NE");
			else if (x > x1 && y < y1)
				System.out.println("SE");
			else if (x < x1 && y < y1)
				System.out.println("SO");
			
			
		}
		}
		
	}
	}

