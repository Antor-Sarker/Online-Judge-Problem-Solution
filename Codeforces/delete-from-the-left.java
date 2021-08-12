import java.util.Scanner;

public class S{
    public static void main(String[] args){
        Scanner scan = new Scanner(System.in);
        String s,t;

         s = scan.next();
         t = scan.next();

         System.out.println(count(s,t));
    }

    static int count(String s, String t){
        int sum,i,j,l,x,y,cnt = 0;
        String a,b;

        sum = s.length() + t.length();

        if(s.length()<t.length()){
            x = s.length();
            y = t.length();

            a = s;
            b = t;
        }

        else{
            x = t.length();
            y = s.length();

            a = t;
            b = s;
        }

        for(i=x-1,j=y-1;i>=0;i--,j--){
            if(a.charAt(i)==b.charAt(j)){
                cnt +=2;
            }
            else{
                break;
            }
        }


        return sum-cnt;
    
	}


}
