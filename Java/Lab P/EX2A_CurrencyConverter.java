//EX-2A APPLICATION USING PACKAGES CURRENCY 
import java.io.*;
import java.util.Scanner;

public class EX2A_CurrencyConverter {
public static void main(String[] args) 
{ 
    double Rs;
    Scanner in = new Scanner(System.in);
    System.out.println("Choose the type of currency conversition");
    System.out.println("1.USDollar to INDRupees,\n2.Euro to INDRupees,\n3.JapaneseYen to INDRupees");
    System.out.println("Enter ur Choice:");
    int ch=in.nextInt(); 
switch(ch)
{
case 1: 
System.out.println("Dollar to Rupees conversion"); 
System.out.println("Enter the number of Dollars:"); 
double dollar=in.nextInt();
Rs=dollar*67.02; 
System.out.println("USD="+dollar+" is INR="+Rs); 
break;
case 2:	
System.out.println("EURO to Rupees conversion");
System.out.println("Enter the number of EURO:"); 
double Euro=in.nextInt();
Rs=Euro*78.29; 
System.out.println("Euro="+Euro+" is INR="+Rs); 
break;
case 3:	
System.out.println("Japanese Yen to Rupees conversion"); 
System.out.println("Enter the number of Yen:");
double Yen=in.nextInt(); 
Rs=Yen*0.61;
System.out.println("Yen="+Yen+" is INR="+Rs); 
break;
}
}
}
