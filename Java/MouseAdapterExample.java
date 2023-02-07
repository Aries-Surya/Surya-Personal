import java.awt.*;
import java.awt.event.*;
// class which inherits the MouseAdapter class
public class MouseAdapterExample extends MouseAdapter {
// object of Frame class
Frame f;
MouseAdapterExample() {
// creating the frame with the title
f = new Frame ("Mouse Adapter");
// adding MouseListener to the Frame
f.addMouseListener(this);
// setting the size, layout and visibility of the frame
f.setSize (300, 300);
f.setLayout (null);
f.setVisible (true);
}
// overriding the mouseClicked() method of the MouseAdapter class
public void mouseClicked (MouseEvent e) {
// creating the Graphics object and fetching them from the Frame object using getGraphics() method
Graphics g = f.getGraphics();
// setting the color of graphics object
g.setColor (Color.BLUE);
// setting the shape of graphics object
g.fillOval (e.getX(), e.getY(), 30, 30);
}
// main method
public static void main(String[] args) {
new MouseAdapterExample();
}
}