import java.util.Scanner; 
public class twistedPrime {
    public static void main(String[] args){
        int r,s=0,flag=1;
        Scanner myObj = new Scanner(System.in);
        int num = myObj.nextInt();
        int len = (int) (Math.log10(num) + 1);
        while (num != 0)
        {
            r = num % 10;
            s += (r*Math.pow(10,len-1));
            num = num/10;
            len--;
        }
        for (int i=2;i<=s/2;i++){
            if(s%i==0){
                flag=0;
                break;
            }
        }

        if(flag==1){
            System.out.println("It is a twisted prime number");
        }else{
            System.out.println("It is not a twisted prime number");
        }
}
}
