import java.util.Scanner;
public class Duplicate{
    public static void main(String[] args){
        Scanner scan = new Scanner(System.in);
        int n,i;

        n = scan.nextInt();

        int[] ara = new int[n];

        for(i=0;i<n;i++){
            ara[i] = scan.nextInt();
        }
		

        remove(ara);
    }
    
	static void remove(int[] ara){
        int i,j;
        int count = 0;

        for(i=ara.length-1;i>=0;i--){
            if(ara[i]==-1){
                continue;
            }

            for(j=i-1;j>=0;j--){
                if(ara[i]==ara[j]){
                    ara[j] = -1;
                    count++;
                }

            }
        }

        System.out.println(ara.length - count);
        
		for(i=0;i<ara.length-1;i++){
            if(ara[i] !=-1){
                System.out.print(ara[i] + " ");
            }
        }

        System.out.println(ara[i]);
    }
}
