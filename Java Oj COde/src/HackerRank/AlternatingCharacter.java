package HackerRank;

import java.util.Scanner;

public class AlternatingCharacter {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner in=new Scanner(System.in);
		int t;
		t=in.nextInt();
		for(int j=1;j<=t;j++){
		char[] ch=in.next().toCharArray();
		int count=0;
		for(int i=0;i<ch.length-1;i++)
		{
			if(ch[i]==ch[i+1])
			count++;
		}
		System.out.println(count);

	}
	}
	

}
