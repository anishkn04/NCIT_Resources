import javax.swing.*;
import java.awt.*;
import java.awt.event.*;

public class Main extends JFrame implements ActionListener{
    JButton red, blue, green;
    public Main(){
        setSize(400, 400);
        red = new JButton("Red");
        blue = new JButton("Blue");
        green = new JButton("Green");
        add(red);
        add(blue);
        add(green);
        setLayout(new FlowLayout());
        setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        setVisible(true);
        red.addActionListener(this);
        blue.addActionListener(this);
        green.addActionListener(this);
    }
    @Override
    public void actionPerformed(ActionEvent e){
        if (e.getSource()==red){
            getContentPane().setBackground(Color.red);
        }
        else if (e.getSource()==blue){
            getContentPane().setBackground(Color.blue);
        }
        else {
            getContentPane().setBackground(Color.green);
        }
    }
    public static void main(String[] args) {
        new Main();
    }
}