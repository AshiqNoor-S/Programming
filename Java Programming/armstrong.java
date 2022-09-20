import java.util.Scanner; 
public class armstrong {
    public static void main(String[] args){
        int r,s=0;
        Scanner myObj = new Scanner(System.in);
        int num = myObj.nextInt();
        int tmp = num;
        while (tmp != 0)
        {
            r = tmp % 10;
            s += Math.pow(r, 3);
            tmp = tmp/10;
        }
        if(s == num)
            System.out.println(num+ " is Armstrong");
        else
            System.out.println(num + " is not Armstrong");
    }
}
