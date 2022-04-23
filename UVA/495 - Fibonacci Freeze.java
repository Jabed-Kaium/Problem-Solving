import java.math.BigInteger;
import java.util.Scanner;

public class Main{
	public static void main(String args[]){
		Scanner sc = new Scanner(System.in);

		BigInteger fib[] = new BigInteger[5005];
		fib[0] = BigInteger.valueOf(0);
		fib[1] = BigInteger.valueOf(1);

		int i=2;
		while(i<=5000){
			fib[i] = fib[i-1].add(fib[i-2]);
			i++;
		}

		int n;
		while(sc.hasNext()){
			n = sc.nextInt();
			System.out.printf("The Fibonacci number for %d is %s\n", n,fib[n].toString());
		}
	}
}