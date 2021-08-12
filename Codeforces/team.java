import java.util.Scanner;

public class Number{
    public static void main(String[] args){
        Scanner scan = new Scanner(System.in);
        int n,x,y,z,count=0;

        n = scan.nextInt();
        while(n>0){
            x=scan.nextInt();
            y=scan.nextInt();
            z=scan.nextInt();

            if((x+y+z)==2 || (x+y+z)==3){
                count++;
            }

            n--;
        }
        System.out.println(count);
    }
}
