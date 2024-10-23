import javax.swing.*;
import java.awt.*;
public class Calculator extends JFrame{
    JTextField t1, t2;
    JLabel ans;
    JButton sum, sub;

    public Calculator(){
        setSize(500, 500);
        t1 = new JTextField();
        t1.setColumns(10);
        t2 = new JTextField(10);
        ans = new JLabel();
        sum = new JButton("+");
        sub = new JButton("-");
        add(t1);
        add(t2);
        add(ans);
        add(sum);
        add(sub);
        setLayout(new FlowLayout());
        setVisible(true);
        sum.addActionListener(e -> {
            int num1 = Integer.parseInt(t1.getText());
            int num2 = Integer.parseInt(t2.getText());
            ans.setText("" + (num1+num2));
        });
        sub.addActionListener(e -> {
            int num1 = Integer.parseInt(t1.getText());
            int num2 = Integer.parseInt(t2.getText());
            ans.setText(""+(num1-num2));
        });
    }

    public static void main(String[] args) {
        new Calculator();
    }
}