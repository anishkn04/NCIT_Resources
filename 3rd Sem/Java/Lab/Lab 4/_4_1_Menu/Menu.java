import java.awt.*;
import java.awt.event.*;
import javax.swing.*;

public class Menu extends JFrame implements ActionListener{
    JMenuBar bar;
    JMenu file;
    JMenuItem sa, cut, paste, copy, exit;
    JTextArea ta;
    JLabel label;
    public Menu(){
        setSize(400, 500);
        bar = new JMenuBar();
        setJMenuBar(bar);
        file = new JMenu("File");
        bar.add(file);
        ta = new JTextArea("Type Something");
        sa = new JMenuItem("Select all");
        cut = new JMenuItem("Cut");
        copy = new JMenuItem("Copy");
        paste = new JMenuItem("Paste");
        exit = new JMenuItem("Exit");
        file.add(sa);
        file.add(cut);
        file.add(copy);
        file.add(paste);
        file.add(exit);
        label = new JLabel();
        label.setBounds(2, 4, 200, 200);
        ta.setBounds(150, 20, 200, 200);
        add(label);
        add(ta);
        setLayout(null);
        setVisible(true);
        sa.addActionListener(this);
        cut.addActionListener(this);
        copy.addActionListener(this);
        paste.addActionListener(this);
        exit.addActionListener(this);
    }
    public void actionPerformed(ActionEvent e){
        String item = e.getActionCommand();
        label.setText("You clicked: " + item);
        switch (item) {
            case "Select all":
                ta.selectAll();
                break;
            
            case "Cut":
                ta.cut();
                break;

            case "Copy":
                ta.copy();
                break;

            case "Paste":
                ta.paste();
                break;

            case "Exit":
                dispose();
                break;
            
            default:
                break;
        }
    }
    public static void main(String[] args) {
        new Menu();
    }
}