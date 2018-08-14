package HackerRank;

import java.util.Scanner;

public class LoveLetterMystery {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner reader = new Scanner(System.in);
        int T = reader.nextInt();
        int count = 0;
        for(int i=0;i<T;i++){
            count = 0;
            String s = reader.next();
            char[] s_letters = s.toCharArray();
            int m = 0;
            int n = s_letters.length-1;
            while(m<n){
                if(s_letters[m]!=s_letters[n]){
                    int tmp = Math.abs(s_letters[m]-s_letters[n]);
                    count = count+tmp;
 
                }
                m++;
                n--;
            }
            System.out.println(count);
        }

	}

}
