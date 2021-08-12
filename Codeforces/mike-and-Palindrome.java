import java.util.Scanner;
public class Palindrome {
    public static void main(String[] args){
        Scanner scan = new Scanner(System.in);
        boolean value;
        String s;

        s = scan.nextLine();
        value = check(s);

        if(value==true){
            System.out.print("YES");
        }

        else{
            System.out.print("NO");
        }


    }

    static boolean check(String s){
        int length = s.length();
        int i,j,dif=0;
        boolean value;

        for(i=0,j=length-1;i<length/2;i++,j--){
            if(dif>1){
                break;
            }
            if(s.charAt(i)!=s.charAt(j)){
                dif++;
            }
        }


        if(dif==0 && (length%2)==1){
            return true;
        }
        else if(dif==1){
            return true;
        }
        else{
            return false;
        }
    }

}
