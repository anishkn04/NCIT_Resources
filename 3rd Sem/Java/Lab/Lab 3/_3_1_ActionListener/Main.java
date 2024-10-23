import javax.swing.*;
import java.awt.*;
import java.awt.event.*;

public class Main extends JFrame implements ActionListener{
    JButton btn;
    JTextField tf;
    public Main(){
        tf = new JTextField();
        tf.setColumns(10);
        btn = new JButton("Click");
        add(tf);
        add(btn);
        setLayout(new FlowLayout());
        pack();
        setVisible(true);
        setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        btn.addActionListener(this);
    }
    @Override
    public void actionPerformed(ActionEvent e){
        Font f = new Font("Arial", Font.BOLD, 20);
        tf.setFont(f);
        tf.setBackground(Color.BLACK);
        tf.setForeground(Color.RED);
        tf.setText(tf.getText().toUpperCase());
    }
    public static void main(String[] args) {
        new Main();
    }
}