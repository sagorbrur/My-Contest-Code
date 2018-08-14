package WarmupContestBRUR.Week_2_6_2016;

import java.util.Scanner;

public class ProblemH {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner in=new Scanner(System.in);
		
		
		int t;
		String s="";
		t=Integer.parseInt(in.nextLine());
		while((t--)>0){
		
		s=in.nextLine();
		if(s.length()==5){
			System.out.println("3");
		}
		else if((s.charAt(0) == 'o' && s.charAt(1) == 'n') ||  
                (s.charAt(1) == 'n' && s.charAt(2) == 'e') ||  
                (s.charAt(2) == 'e' && s.charAt(0) == 'o'))   
                        System.out.println("1"); 
		
		else
			System.out.println("2");

	}
	}

}
