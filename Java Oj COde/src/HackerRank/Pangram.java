package HackerRank;

import java.util.Scanner;

public class Pangram {
	private static final int NUMBER_OF_ALPHABATE=26;
	
	public static void main(String[] args){
		Scanner in=new Scanner(System.in);
		String s;
		
		s=in.nextLine();
		if(isPangram(s)==true)
		System.out.println("pangram");
		else
			System.out.println("not pangram");
			
	}
	
	
	
	private static boolean isPangram(String sentence){
		if(sentence.length()<NUMBER_OF_ALPHABATE)
			return false;
		for(char ch='A';ch<='Z';ch++)
		{
			if(sentence.indexOf(ch)<0 && sentence.indexOf((char)(ch+32))<0){
				return false;
			}
				
		}
		return true;
	}

}
