package HackerRank;

import java.util.Scanner;

public class AngryProfessor {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner in=new Scanner(System.in);
		int t,l;
		t=in.nextInt();
		for(l=1;l<=t;l++){
			int n,k;
		n=in.nextInt();
		k=in.nextInt();
		int count=0;
		int[] a=new int[n];
		for(int i=0;i<n;i++)
			a[i]=in.nextInt();
		
		for(int j=0;j<n;j++)
		{
			if(a[j]<0||a[j]==0)
				count++;
		}
		if(count==k)
			System.out.println("NO");
		else
			System.out.println("YES");
		
		

	}
	}

}
