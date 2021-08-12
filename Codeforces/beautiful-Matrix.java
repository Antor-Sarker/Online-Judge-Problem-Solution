import java.util.Scanner;
public class Matrix{
    public static void main(String[] args){
        
		Scanner scan = new Scanner(System.in);
        int m[][] = new int[5][5];
        int i,j,x=0,y=0,cnt=0;
        
        for(i=0;i<5;i++){
            for(j=0;j<5;j++){
                
				m[i][j] = scan.nextInt();
                if(m[i][j]==1){
                    x=i;
                    y=j;
                }
            }
        }

        if(x>2){
            cnt=cnt+(x-2);
        }
        else{
            cnt=cnt+(2-x);
        }

        if(y>2){
            cnt=cnt+(y-2);
        }
        else{
            cnt=cnt+(2-y);
        }

        System.out.println(cnt);

    }
}
