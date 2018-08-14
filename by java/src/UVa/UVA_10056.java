package UVa;

import java.util.Scanner;

public class UVA_10056 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner in=new Scanner(System.in);
		
		int t,n,i;
		double p;
		
		t=in.nextInt();
		for(int j=1;j<=t;j++)
		{
			n=in.nextInt();
			p=in.nextDouble();
			i=in.nextInt();
			
			System.out.printf("%.4f\n",(p*Math.pow(p-1, i-1))/(1-Math.pow(1-p, n)));
			
			
		}

	}
	

}
