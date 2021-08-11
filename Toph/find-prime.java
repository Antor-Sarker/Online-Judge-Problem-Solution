import java.util.Scanner;

public class Prime{
	int[]  prm = new int[701];

	void p(int x, int y){

		int i,j;
		if(x==1) {
			for (i=y-1;i>0;i--) {
				if (prm[i] == 0) {
					System.out.print(i + " ");
					break;
				}
			}
		}

		else if(x == 2) {
			for (i = y + 1; i < 1000; i++) {
				if (prm[i] == 0) {
					System.out.println(i);
					break;
				}
			}
	   }

	   else{

		   for(i = 2; i*i<=700; i++) {
			   for (j = 2; i*j <= 700; j++) {
				   prm[i * j] = 1;
			   }
		   }
		}
		
	}



	public static void main(String[] args) {
		Scanner scan = new Scanner(System.in);

		int t,i,n;

		Prime pp = new Prime();

		pp.p(0,0);

		t = scan.nextInt();
	
		for(i=0;i<t;i++){
			n = scan.nextInt();

			pp.p(1,n);
			pp.p(2,n);
		}

	}


}
