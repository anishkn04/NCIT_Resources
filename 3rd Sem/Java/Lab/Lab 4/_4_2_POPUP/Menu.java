import java.awt.event.*;
import javax.swing.*;

public class Menu extends MouseAdapter implements ActionListener {
    JFrame f;
    JMenuItem sa, cut, paste, copy;
    JPopupMenu p;
    JLabel label;
    JTextArea ta;

    public Menu() {
        f = new JFrame();
        f.setSize(400, 500);
        label = new JLabel();
        label.setBounds(1, 1, 230, 20);
        f.add(label);
        p = new JPopupMenu();
        f.add(p);
        sa = new JMenuItem("select all");
        cut = new JMenuItem("cut");
        copy = new JMenuItem("copy");
        paste = new JMenuItem("paste");
        f.setLayout(null);
        ta = new JTextArea(" type");
        ta.setBounds(40, 50, 230,250);
        f.add(ta);

        p.add(sa);
        p.add(cut);
        p.add(copy);

        p.add(paste);
        sa.addActionListener(this);
        cut.addActionListener(this);
        copy.addActionListener(this);
        paste.addActionListener(this);

        f.setVisible(true);
        f.addMouseListener(this);
    }

    public void actionPerformed(ActionEvent e) {
        String item = e.getActionCommand();
        label.setText("you clicked" + item);
        switch (item) {
            case "select all":
                ta.selectAll();
                break;
            case "cut":
                ta.cut();
                break;
            case "copy":
                ta.copy();
                break;
            case "paste":
                ta.paste();
                break;
            default:
                System.exit(0);
                break;
        }
    }

    public void mouseClicked(MouseEvent e) {
        p.show(f, e.getX(), e.getY());
    }

    public void mousePressed(MouseEvent e) {
    }

    public void mouseReleased(MouseEvent e) {
    }

    public void mouseDragged(MouseEvent e) {
    }

    public void mouseMoved(MouseEvent e) {
    }

    public void mouseEntered(MouseEvent e) {
    }

    public void mouseExited(MouseEvent e) {
    }

    public static void main(String[] args) {
        new Menu();
    }
}
