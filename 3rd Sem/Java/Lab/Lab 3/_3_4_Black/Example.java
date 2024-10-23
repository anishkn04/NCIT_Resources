import javax.swing.*;
import java.awt.*;
import java.awt.event.*;
import java.beans.EventHandler;

public class Example extends JFrame{
    JButton btn;
    JTextField tf;
    public Example(){
        tf = new JTextField();
        tf.setColumns(10);
        tf.setToolTipText("Type Something");
        btn = new JButton("Click");
        add(tf);
        add(btn);
        setLayout(new FlowLayout());
        pack();
        setVisible(true);
        setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        EventHandler ev = new EventHandler(this);
        btn.addActionListener(ev);
    }
    class EventHandler implements ActionListener{
        Example e;
        public EventHandler(Example e){
            this.e = e;
        }

        @Override
        public void actionPerformed(ActionEvent e) {
            this.e.tf.setBackground(Color.BLACK);
        }
    }
    public static void main(String[] args) {
        new Example();
    }
}