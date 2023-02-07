//EX-05 ARRAY LIST
import java.util.ArrayList; 
import java.util.Scanner;
class EX5_ArrayList
{
    public static void main(String args[])
    {
        ArrayList<String> arrlist = new ArrayList<>();
        arrlist.add("book");
        arrlist.add("cook"); 
        arrlist.add("HTML"); 
        System.out.println("Printing list1:"); 
        System.out.println(arrlist); 
        arrlist.add(1,"PHP");
        System.out.println("(After Insertion) Printing list1:"); 
        System.out.println(arrlist);
        ArrayList<String> arrlist2 = new ArrayList<>(); 
        arrlist2.add("cat");
        arrlist2.add("bat");
        arrlist2.add("hat"); 
        arrlist2.add("Jump"); 
        System.out.println("Printing list2:");
        System.out.println(arrlist2); 
        arrlist.addAll(arrlist2);
        System.out.println("After Appended Printing all the elements"); 
        System.out.println(arrlist);
        System.out.println("SEARCH STRING IN ARRAY LIST"); 
        System.out.println("###########################"); 
        Scanner in = new Scanner(System.in); 
        System.out.println("ENTER THE STRING TO BE SEARCH:"); 
        String searchString=in.next();
        boolean Found = arrlist.contains(searchString); 
        if(Found)
        System.out.println("SUCCESS!!! String is available in the Arraylist");
        else
        System.out.println("Failure!!! Try Again");
        System.out.println("LIST THE STRING IN ARRAY LIST"); 
        System.out.println("	"); 
        ArrayList <String> listClone = new ArrayList<>();
        for (String string : arrlist)
        {
            if(string.matches("(?i)(b).*"))
            {
                listClone.add(string);
            }
        }
        System.out.println(listClone);
    }
}
