import java.util.Scanner;
import java.math.BigInteger;

public class BigInt {
	public static void main(String[] args) {
		Scanner input = new Scanner(System.in);
		BigInteger a,b;
		BigInteger mod = new BigInteger("1000000007");
		int t,counter=1;
		t = input.nextInt();
		while(counter<=t) {
		a = input.nextBigInteger();
		b = input.nextBigInteger();
		
		BigInteger ans = a.modPow(b,mod);
		
		System.out.println(ans);
		counter++;
		}
	}
}
