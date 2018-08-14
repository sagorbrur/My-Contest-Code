package HackerRank;
import java.util.Arrays;
import java.util.Scanner;


public class ReverseArray {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner in=new Scanner(System.in);
		int n,t;
		t=in.nextInt();
		for(int j=1;j<=t;j++){
		n=in.nextInt();
		int[] ar=new int[n];
		for(int i=0;i<n;i++)
			ar[i]=in.nextInt();
		//reversing
		for(int i=0;i<ar.length/2;i++){
			int temp=ar[i];
			ar[i]=ar[ar.length-1-i];
			ar[ar.length-1-i]=temp;
		}
		for(int i=0;i<n;i++)
		System.out.print(ar[i]+" ");
		System.out.println();

	}
	}

}
