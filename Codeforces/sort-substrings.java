import java.util.Scanner;

public class S{
    public static void main(String[] args){

        Scanner scan = new Scanner(System.in);
        int t,i;
        String s;

        t = scan.nextInt();
        for(i=1;i<=t;i++){
            s = scan.next();
            convert(s);
        }
    }

    static void convert(String s){
        int i;

        for(i=0;i<s.length();i=i+2){
            System.out.print(s.charAt(i));
        }
        
        System.out.println(s.charAt(s.length()-1));
    }
}
