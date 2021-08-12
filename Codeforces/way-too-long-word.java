import java.util.Scanner;
public class Word {
    public static void main(String[] args){
    Scanner scan = new Scanner(System.in);
    int n,length,i;
    String w;

    n = scan.nextInt();
    scan.nextLine();
    
    for(i=1;i<=n;i++){
        w = scan.nextLine();
        length = w.length();
        f(w,length);
    }
}
    static void f(String s, int l){

        if(l<=10){
            System.out.println(s);
        }
        else{
            System.out.print(s.charAt(0));
            System.out.print(l-2);
            System.out.println(s.charAt(l-1));
        }
    }

}
