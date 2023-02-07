//EX 2C APPLICATION USING PACKAGES TIME CONVERTER
import java.util.Scanner; 
public class EX2C_TimeConverter
{
public static void main(String[] args)
{ 
    int n,hr,min,sec;
    Scanner in = new Scanner(System.in); 
    System.out.print("Enter the Input in seconds:"); 
    n= in.nextInt();
    if(n>3600)
    {
        min = n/60; 
        sec = n%60; 
        hr = min/60;
        //min = min%60;
        System.out.println("Converted format:"+hr+ "hour " + min +"mins " +sec+"secs");
    }
    else{
        min = n/60; 
        sec = n%60;
        System.out.println("Converted format :"+min+" mins " +sec +"secs");
    }
}
}
