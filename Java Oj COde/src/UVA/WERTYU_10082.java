package UVA;
import java.util.*;

public class WERTYU_10082 {
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner sc = new Scanner(System.in);
		String str,keyboard;
		int len;
		keyboard = "`1234567890-=QWERTYUIOP[]\\ASDFGHJKL;'ZXCVBNM,./";
		while(sc.hasNext()){
			str = sc.nextLine();
			len = str.length();
			for(int i = 0;i<len;i++ ){
				if(str.charAt(i)==' ')System.out.print(" ");
				else
				System.out.print(keyboard.charAt(keyboard.indexOf(str.charAt(i))-1));
			}
			System.out.println();
		}

	}


	/*public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner in=new Scanner(System.in);
		String key="  `1234567890-=QWERTYUIOP[]\\ASDFGHJKL;'ZXCVBNM,./";
		HashMap<Character,Character> map=new HashMap<Character,Character>();
		for(int b=1;b<key.length();b++){
			map.put(key.charAt(b), key.charAt(b-1));
			
		}
		while(in.hasNext()){
			String s=in.nextLine();
			for(char a: s.toCharArray())
				System.out.print(map.get(a));
			System.out.println("");
		}

	}*/

}
