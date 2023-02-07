import javax.swing.*;
public class TextArea
{
    TextArea()
    {
        JFrame f= new JFrame();
        JTextArea area=new JTextArea("Welcome to TextArea");
        area.setBounds(1,0, 500,500);
        f.add(area); 
        f.setSize(500,500);
        f.setLayout(null);
        f.setVisible(true);
    }
    public static void main(String args[])
    {
        new TextArea();
    }
}