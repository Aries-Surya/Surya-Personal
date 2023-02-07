class Main{  
String color="white";
int instanceVar = 5;  //instance is declared here
void name(){
    System.out.print("My name is : "); 
}
}  
class SubClass extends Main{  
String color="black"; 
void print(){  
System.out.println("Printing Normally:"+color);//prints color in subclass 
System.out.println("Printing using the Super keyword:"+super.color);//prints color in mainclass because of keyword Super
System.out.println("Value of instance variable : "+instanceVar);
this.name();  //This keyword is used here
System.out.println("Jonah SP");
}  
}  
class ProjectJSP{  
public static void main(String args[]){  
SubClass d = new SubClass();  //New Keyword is used here
d.print();  
}}