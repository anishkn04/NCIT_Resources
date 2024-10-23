import javax.swing.*;
import java.awt.*;
import java.awt.event.*;
public class Mouse implements MouseListener, MouseMotionListener{
    JFrame f;
    JTextField t1, t2;
    public Mouse(){
        f = new JFrame();
        f.setSize(500,500);
        t1 = new JTextField(10);
        t1.setToolTipText("X and Y coordinates");
        f.add(t1);
        f.setLayout(new FlowLayout());
        f.addMouseListener(this);
        f.addMouseMotionListener(this);
        f.setVisible(true);
    }

    @Override
    public void mouseEntered(MouseEvent e) {}

    @Override
    public void mouseExited(MouseEvent e) {}

    @Override
    public void mouseMoved(MouseEvent e) {
        String v = "X = "+e.getX()+" Y = "+e.getY();
        t1.setText(v);
    }

    @Override
    public void mouseClicked(MouseEvent e) {

    }

    @Override
    public void mouseDragged(MouseEvent e) {

    }

    @Override
    public void mousePressed(MouseEvent e) {

    }

    @Override
    public void mouseReleased(MouseEvent e) {

    }

    public static void main(String[] args) {
        new Mouse();
    }
}
