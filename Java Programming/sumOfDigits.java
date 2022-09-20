import java.util.Scanner; 
public class sumOfDigits {
    public static void main(String[] args){
        int r,s=0;
        Scanner myObj = new Scanner(System.in);
        int num = myObj.nextInt();
        while (num != 0)
        {
            r = num % 10;
            s += r;
            num = num/10;
        }
        System.out.println(s);
    }
}
