import java.util.Scanner;

public class Main{
  public static void main(String []args){
    int n,ge,shi,bai,i=1;
      Scanner in=new Scanner(System.in);
      n=in.nextInt();
      ge=n%10;
      n/=10;
      shi=n%10;
      n/=10;
      bai=n%10;
      while((bai--)>0) System.out.print('B');
      while((shi--)>0) System.out.print('S');
      while((ge--)>0)
      {
         System.out.print(i);
         ++i;
      }
  }
}